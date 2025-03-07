//
//#include <iostream>
//using namespace std;
//
//
//void SelectionSort(int arr[], int n){
//    for(int i = 0; i <= n-2; i++){
//        int mini = i;
//        for (int j = i+1; j<=n-1; j++){
//            if(arr[j] < arr[mini]){
//                mini = j;
//            }
//        }
//        int temp = arr[mini];
//        arr[mini] = arr[i];
//        arr[i] = temp;
//    }
//}
//
//void BubbleSort(int arr[], int n){
//    for(int i = n-1; i >= 0; i--){
//        int didswap = 0;
//        for(int j = 0; j<=i-1; j++){
//            if(arr[j+1] < arr[j]){
//                int temp = arr[j+1];
//                arr[j+1] = arr[j];
//                arr[j] = temp;
//                didswap = 1;
//        }
//         
//        }
//        if (didswap == 0){
//            break;
//    }
//    }
//}
//
//void InsertionSort(int arr[], int n){
//    for(int i = 0; i <= n-1; i++){
//        int j = i;
//        while(j>0 && arr[j-1] > arr[j]){
//            int temp = arr[j-1];
//            arr[j-1] = arr[j];
//            arr[j] = temp;
//            j--;
//        }
//    }
//}
//
//
//int main(){
//    int arr[5] = {29, 46, 3, 20, 1};
//    InsertionSort(arr, 5);
//    
//    for(int i = 0; i< 5 ; i++){
//        cout << arr[i] <<endl;
//    }
//}
