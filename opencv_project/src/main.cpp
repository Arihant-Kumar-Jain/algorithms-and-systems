#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main() {
    // Open the default camera (usually 0)
    VideoCapture cap(0);

    if (!cap.isOpened()) {
        cerr << "❌ Could not open the camera!" << endl;
        return -1;
    }

    cout << "✅ Camera opened successfully. Press any key to exit." << endl;

    Mat frame;
    while (true) {
        cap >> frame; // Capture a new frame

        if (frame.empty()) {
            cerr << "⚠️ Blank frame grabbed!" << endl;
            break;
        }

        imshow("Live Camera Feed", frame);

        // Break the loop if any key is pressed
        if (waitKey(1) >= 0) break;
    }

    cap.release(); // release the camera
    destroyAllWindows(); // close all windows
    return 0;
}
