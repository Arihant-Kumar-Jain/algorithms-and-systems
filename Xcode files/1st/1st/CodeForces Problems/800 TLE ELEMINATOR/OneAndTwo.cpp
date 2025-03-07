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
//        //filling the array
//        for(int i = 0; i<n; ++i){
//            cin>>arr[i];
//        }
//        
//        int cnt = 0;
//        for(int i = 0; i<n-1; ++i){
//            if(arr[i] == arr[i+1]){
//                cnt++;
//            }
//        }
//        if(cnt == n-1){
//            cout << "NO" <<endl;
//            continue;
//            
//        }
//        
//        //if first few terms equal
//        if(arr[0] == arr[1]){
//            int f = 1;
//            while(arr[1] == arr[f]){
//                f++;
//            }
//            int temp = arr[1];
//            arr[1] = arr[f];
//            arr[f] = temp;
//            
//        }
//        
//        //sorting
//        int sum = arr[0];
//        for(int i = 1; i<n; ++i){
//            if(sum == arr[i] && arr[i-1] != arr[i]){
//                int temp = arr[i];
//                arr[i] = arr[i-1];
//                arr[i-1] = temp;
//            }
//            sum += arr[i];
//        }
//        
//        //print the final answer
//        cout<<"YES"<<endl;
//        for(int i = 0; i<n; i++){
//            cout << arr[i] << " ";
//        }
//        
//        cout <<endl;
//    }
//}
