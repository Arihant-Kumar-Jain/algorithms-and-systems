//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b){
//    
//    int m = min(a, b);
//    while(m--){
//        if(a%m == 0 && b%m == 0){
//            
//            break;
//        }
//    }
//    return m;
//}
//
//int main(){
//    int t,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>n;
//        int arr[n];
//        
//        for(int i = 0; i<n ; i++){
//            cin>>arr[i];
//        }
//        
//        bool flag = false;
//        
//        for (int i = 0; i<n; i++){
//            for(int j = i+1; j<n ; j++){
//                if(gcd(arr[i], arr[j]) <= 2 ){
//                    flag = true;
//                    break;
//                    
//                }
//            }
//        }
//        
//        if(flag == true){
//            cout << "YES" <<endl;
//        }
//        else{
//            cout <<"NO"<< endl;
//        }
//        
//    }
//}
