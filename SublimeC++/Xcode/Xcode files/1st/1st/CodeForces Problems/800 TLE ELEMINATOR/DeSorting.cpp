//#include <iostream>
//using namespace std;
//
//int main(){
//    int t,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>n;
//        int arr[n];
//        
//        for(int i = 0; i<n; i++){
//            cin>>arr[i];
//        }
//        
//        int min = 1000000000;
//        for(int i = 0; i<n-1; i++){
//            if((arr[i+1] - arr[i]) < min){
//                min = (arr[i+1] - arr[i]);
//            }
//        }
//        
//        if(min<0){
//            cout << 0 <<endl;
//        }
//        else if(min == 0){
//            cout << 1 <<endl;
//        }
//        else if(min%2 == 0){
//            cout << (min/2) + 1 <<endl;
//        }
//        else if(min%2 != 0){
//            cout << (min+1)/2 <<endl;
//        }
//    }
//}

//i think we can find the minimum difference between the consecutive elements of the array.
