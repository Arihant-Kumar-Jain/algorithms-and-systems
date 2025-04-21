#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

// Global variables for trackbars
int low_H = 0, low_S = 20, low_V = 60;
int high_H = 20, high_S = 150, high_V = 255;
int erosion_size = 2;
int dilation_size = 2;
int blur_size = 5;
int min_area = 3000;

// Function to count fingers using convexity defects
int countFingers(const vector<Vec4i>& defects, const vector<Point>& contour, Mat& frame) {
    int fingers = 0;
    
    // If no defects, might be 0 or 1 finger
    if (defects.size() == 0) {
        return 0;
    }
    
    // Count fingers by analyzing defects
    for (const Vec4i& v : defects) {
        Point start = contour[v[0]];
        Point end = contour[v[1]];
        Point far = contour[v[2]];
        
        // Calculate depth points and angles
        float a = sqrt(pow(end.x - start.x, 2) + pow(end.y - start.y, 2));
        float b = sqrt(pow(far.x - start.x, 2) + pow(far.y - start.y, 2));
        float c = sqrt(pow(end.x - far.x, 2) + pow(end.y - far.y, 2));
        float angle = acos((b*b + c*c - a*a) / (2*b*c)) * 180 / CV_PI;
        
        // If angle is less than 90 degrees, it's likely a finger
        if (angle <= 90 && v[3] > 10000) {  // v[3] is depth
            fingers++;
            circle(frame, far, 8, Scalar(0, 0, 255), -1);  // Draw red circle at defect point
        }
    }
    
    return fingers + 1;  // +1 because defects count valleys between fingers
}

int main() {
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        cerr << "❌ Could not open the camera!" << endl;
        return -1;
    }
    
    // Create windows
    namedWindow("Finger Counter", WINDOW_NORMAL);
    namedWindow("Mask", WINDOW_NORMAL);
    namedWindow("Controls", WINDOW_NORMAL);
    
    // Resize and position windows
    resizeWindow("Finger Counter", 640, 480);
    resizeWindow("Mask", 640, 480);
    resizeWindow("Controls", 400, 400);
    moveWindow("Finger Counter", 100, 100);
    moveWindow("Mask", 800, 100);
    moveWindow("Controls", 500, 600);
    
    // Create trackbars for HSV thresholding
    createTrackbar("Low H", "Controls", &low_H, 180);
    createTrackbar("High H", "Controls", &high_H, 180);
    createTrackbar("Low S", "Controls", &low_S, 255);
    createTrackbar("High S", "Controls", &high_S, 255);
    createTrackbar("Low V", "Controls", &low_V, 255);
    createTrackbar("High V", "Controls", &high_V, 255);
    
    // Create trackbars for morphological operations
    createTrackbar("Erosion", "Controls", &erosion_size, 10);
    createTrackbar("Dilation", "Controls", &dilation_size, 10);
    createTrackbar("Blur Size", "Controls", &blur_size, 20);
    createTrackbar("Min Area", "Controls", &min_area, 10000);
    
    // Try to set camera properties
    cap.set(CAP_PROP_FRAME_WIDTH, 640);
    cap.set(CAP_PROP_FRAME_HEIGHT, 480);
    
    Mat frame, hsv, mask, blurMask;
    
    while (true) {
        cap >> frame;
        if (frame.empty()) break;
        
        flip(frame, frame, 1);  // Mirror
        
        // Make a copy for drawing
        Mat drawing = frame.clone();
        
        // Convert to HSV
        cvtColor(frame, hsv, COLOR_BGR2HSV);
        
        // Create mask using current trackbar values
        inRange(hsv, Scalar(low_H, low_S, low_V), Scalar(high_H, high_S, high_V), mask);
        
        // Handle the red hue wrap-around if needed
        if (low_H < 10 && high_H < 30) {
            Mat mask2;
            inRange(hsv, Scalar(170, low_S, low_V), Scalar(180, high_S, high_V), mask2);
            mask = mask | mask2;
        }
        
        // Ensure blur size is odd
        int blur_val = blur_size * 2 + 1;
        blur_val = max(1, min(blur_val, 31));
        
        // Apply Gaussian blur to reduce noise
        GaussianBlur(mask, blurMask, Size(blur_val, blur_val), 0);
        
        // Create kernels for morphological operations
        Mat erodeElement = getStructuringElement(MORPH_ELLIPSE, 
                                               Size(2*erosion_size + 1, 2*erosion_size + 1),
                                               Point(erosion_size, erosion_size));
        
        Mat dilateElement = getStructuringElement(MORPH_ELLIPSE, 
                                                Size(2*dilation_size + 1, 2*dilation_size + 1),
                                                Point(dilation_size, dilation_size));
        
        // Apply morphological operations
        erode(blurMask, blurMask, erodeElement);
        dilate(blurMask, blurMask, dilateElement);
        
        // Find contours
        vector<vector<Point>> contours;
        findContours(blurMask.clone(), contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
        
        // Find largest contour
        int maxIndex = -1;
        double maxArea = 0;
        for (size_t i = 0; i < contours.size(); i++) {
            double area = contourArea(contours[i]);
            if (area > min_area && area > maxArea) {
                maxArea = area;
                maxIndex = i;
            }
        }
        
        // Process largest contour if found
        int fingerCount = 0;
        if (maxIndex != -1) {
            // Draw contour
            drawContours(drawing, contours, maxIndex, Scalar(0, 255, 0), 2);
            
            // Create convex hull
            vector<int> hull_indices;
            vector<Point> hull_points;
            convexHull(contours[maxIndex], hull_indices);
            convexHull(contours[maxIndex], hull_points);
            
            // Draw hull
            polylines(drawing, hull_points, true, Scalar(0, 255, 255), 2);
            
            // Calculate defects
            if (hull_indices.size() > 3) {
                vector<Vec4i> defects;
                convexityDefects(contours[maxIndex], hull_indices, defects);
                
                // Count fingers
                fingerCount = countFingers(defects, contours[maxIndex], drawing);
                fingerCount = min(5, max(0, fingerCount));
            }
            
            // Draw center point
            Moments m = moments(contours[maxIndex]);
            if (m.m00 != 0) {
                Point center(m.m10/m.m00, m.m01/m.m00);
                circle(drawing, center, 10, Scalar(255, 0, 0), -1);
            }
        }
        
        // Display finger count
        string text = "Fingers: " + to_string(fingerCount);
        putText(drawing, text, Point(30, 50), FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 0, 255), 2);
        
        // Draw hand positioning guide
        Rect guideRect(frame.cols/4, frame.rows/4, frame.cols/2, frame.rows/2);
        rectangle(drawing, guideRect, Scalar(255, 0, 0), 2);
        
        // Display HSV values
        string hsvText = "HSV: " + to_string(low_H) + "-" + to_string(high_H) + ", " 
                              + to_string(low_S) + "-" + to_string(high_S) + ", " 
                              + to_string(low_V) + "-" + to_string(high_V);
        putText(drawing, hsvText, Point(30, 90), FONT_HERSHEY_SIMPLEX, 0.6, Scalar(255, 0, 0), 1);
        
        // Display morphology values
        string morphText = "E:" + to_string(erosion_size) + " D:" + to_string(dilation_size) 
                         + " B:" + to_string(blur_val) + " A:" + to_string(min_area);
        putText(drawing, morphText, Point(30, 120), FONT_HERSHEY_SIMPLEX, 0.6, Scalar(255, 0, 0), 1);
        
        // Show images
        imshow("Finger Counter", drawing);
        imshow("Mask", blurMask);
        
        // Exit on ESC
        if (waitKey(10) == 27) break;
    }
    
    cap.release();
    destroyAllWindows();
    return 0;
}
