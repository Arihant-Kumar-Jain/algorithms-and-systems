//#include <iostream>
//using namespace std;
//
//int main(){
//    int t,n,x;
//    cin>>t;
//    
//    while(t--){
//        cin>>n>>x;
//        int arr[n+2];
//        arr[n+1] = x;
//        arr[0] = 0;
//        
//        //Making the array for each loop
//        for (int  i = 1; i < n+1 ; i++){
//            cin >> arr[i];
//        }
//        
//        //updating the array to hold the differences between two fuel centers but last element remains same
//        for(int i = 0; i<n+1 ; i++){
//            arr[i] = arr[i+1] - arr[i];
//        }
//        arr[n] = 2*arr[n];
//        
//        //now find max element in the diffeneces except the last element
//        int mx = 0;
//        for (int  i =0; i < n+1; i++){
//            if(arr[i] >= mx){
//                mx = arr[i];
//            }
//        }
//        cout << mx;
//    }
//}
