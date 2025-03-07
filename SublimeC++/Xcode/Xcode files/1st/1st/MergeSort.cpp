//#include <iostream>
//#include <vector>
//using namespace std;
//
//void merge(int arr[], int l, int mid, int h){
//    int m = mid+1;
//    int ln = l;
//    vector<int> temp;
//    while(ln<=mid && m<=h){
//        if(arr[ln] <= arr[m]){
//            temp.push_back(arr[ln]);
//            ln++;
//        }
//        else{
//            temp.push_back(arr[m]);
//            m++;
//        }
//    }
//    
//    while(ln<=mid){
//        temp.push_back(arr[ln]);
//        ln++;
//    }
//    
//    while(m <= h){
//        temp.push_back(arr[m]);
//        m++;
//    }
//    
//    for(int i = l; i <= h; i++){
//        arr[i] = temp[i-l];
//    }
//}
//
//void mergeSort(int arr[], int l, int h){
//    if(l >= h){
//        return;
//    }
//    int mid = (l+h)/2;
//    mergeSort(arr, l, mid);
//    mergeSort(arr, mid+1, h);
//    merge(arr, l, mid, h);
//}
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    
//    for (int i = 0; i < n ; i++){
//        cin>>arr[i];
//    }
//    
//    mergeSort(arr, 0, n-1);
//    
//    for (int i = 0; i < n ; i++){
//        cout << arr[i]<<" ";
//    }
//}
