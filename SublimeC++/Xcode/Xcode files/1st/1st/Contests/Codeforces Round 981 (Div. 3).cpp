//Problem 1: Accepted

//#include<iostream>
//using namespace std;
//
//int main(){
//    int t,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>n;
//        
//        int pos = 0;
//        int i = 0;
//        int turn = 0;
//        while(abs(pos) < abs(n)){
//            if(i%2 == 0){
//                pos = pos - abs((2*i)-1);
//                turn++;
//            }else{
//                pos = pos + abs((2*i)-1);
//                turn++;
//            }
//        }
//        
//        if(turn%2 == 0){
//            cout << "Sakurako"<<endl;
//        }else{
//            cout << "Kosuke" <<endl;
//        }
//    }
//}


//Problem 2: Accepted

//#include <iostream>
//#include <unordered_map>
//#include <limits>
//using namespace std;
//
//int main() {
//    int t, n;
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//
//        unordered_map<int, int> hash;
//
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                int value;
//                cin >> value;
//
//              
//                if (hash.find(i - j) == hash.end()) {
//                    hash[i - j] = numeric_limits<int>::max();
//                }
//                if (hash[i - j] > value) {
//                    hash[i - j] = value;
//                }
//            }
//        }
//
//        int count = 0;
//        for (auto it : hash) {
//            if (it.second < 0) {
//                count += abs(it.second);
//            }
//        }
//
//        cout << count << endl;
//    }
//
//    return 0;
//}


//Problem 4 - Accepted

//#include <iostream>
//#include <unordered_map>
//using namespace std;
// 
//int main() {
//    int t, n;
//    cin >> t;
// 
//    while (t--) {
//        cin >> n;
//        int arr[n];
// 
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
// 
//        int cnt = 0;
//        int last_end = -1;
//        int prefix_sum = 0;
//        unordered_map<int, int> prefix_indices;
//        prefix_indices[0] = -1;
// 
//        for (int i = 0; i < n; i++) {
//            prefix_sum += arr[i];
// 
//     
//            if (prefix_indices.find(prefix_sum) != prefix_indices.end()) {
//               
//                if (prefix_indices[prefix_sum] >= last_end) {
//                    cnt++;
//                    last_end = i;
//                }
//            }
// 
//            prefix_indices[prefix_sum] = i;
//        }
// 
//        cout << cnt << endl;
//    }
// 
//    return 0;
//}


//Problem 3 - Not Accepted (less time..contest finished)
//#include <iostream>
//using namespace std;
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
//
//        //two wale cases and three wale cases
//        for(int i = 0; i<n-1; i++){
//            if(i>0){
//                if((((arr[i] == arr[i+1]) && (arr[i] == arr[i-1])) && ((((arr[i] != arr[n-i+2]) || (arr[i] != arr[n-i])) || ((arr[i] != arr[n-i+2]) && (arr[i] != arr[n-i]))))){
//                    swap(arr[i], arr[n-i+1]);
//                    
//                }else if((arr[i] == arr[i+1]) && ((arr[i] != arr[n-i+2]) && (arr[i] != arr[n-i]))){
//                    swap(arr[i], arr[n-i+1]);
//                   
//                }
//            }
//        }
//        
//        int count = 0;
//        for(int i = 0; i<n-1; i++){
//            if(arr[i] == arr[i+1]){
//                count++;
//            }
//        }
//        
//        cout <<count <<endl;
//        
//    }
//}


