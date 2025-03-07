//#include<iostream>
//#include<unordered_set>
//using namespace std;
//
//int main(){
//    int t,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>n;
//        int arr[n];
//        unordered_set<int> check;
//        int c1 = 1;
//        int c2 = 0;
//        
//        for(int i = 0; i<n; i++){
//            cin>>arr[i];
//            check.insert(arr[i]);
//        }
//        
//        long m = check.size();
//        
//        if( m == 1){
//            cout<<"YES"<<endl;
//        }
//        else if( m == 2){
//            for(int i = 0; i<n-1 ; i++){
//                if(arr[i] == arr[i+1]){
//                    c1++;
//                }
//                else if(arr[i] != arr[i+1]){
//                    c2++;
//                    arr[i+1] = arr[i];
//                }
//                
//                    
//            }
//            
//            if(abs(c1 - c2) <= 1){
//                cout << "YES" <<endl;
//            }
//            else{
//                cout << "NO" <<endl;
//            }
//        }
//        else{
//            cout << "NO" <<endl;
//        }
//        
//        
//        
//
//    }
//}
