//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int t,n,k,x;
//    cin>>t;
//    
//    while(t--){
//        cin>>n>>k>>x;
//        
//        if(k==1 && x==1){
//            cout << "NO" << endl;
//            continue;
//        }
//        
//        int cnt = 0;
//        vector<int> v;
//        while(n){
//            if(x ==1 && n ==1){
//                break;
//                
//            }
//            if(k != x ){
//                while(n>=k){
//                    if(x ==1 && n ==1){
//                        break;
//                    }
//                    n-=k;
//                    cnt++;
//                    v.emplace_back(k);
//                    
//                }
//                
//                if(n < k){
//                    if(n!=x){
//                        k = n;
//                    }
//                    if(n==x){
//                        k = n-1;
//                    }
//                }
//            }
//            
//            else if (k == x){
//                k--;
//            }
//
//        }
//        
//        if (n == 0) {
//            cout<<"YES" <<endl;
//            cout <<cnt <<endl;
//            for(auto it: v){
//                cout << it <<" ";
//            }
//            cout <<endl;
//            
//        }
//        else{
//            cout <<"NO" <<endl;
//        }
//
//        
//    }
//}

//
////approach 2
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t, n, k, x;
//    cin >> t;
//
//    while (t--) {
//        cin >> n >> k >> x;
//        int cnt = 0;
//        vector<int> v;
//
//        // Handle special case when x = 1 and k = 1
//        if (x == 1 && k == 1) {
//            cout << "NO" << endl;
//            continue;
//        }
//
//        // If x is not 1, fill with 1s
//        if (x != 1) {
//            cnt = n;
//            v.insert(v.begin(), n, 1);
//            n = 0;
//        }
//        // If x = 1 and n is even
//        else if (x == 1 && n % 2 == 0) {
//            cnt = n / 2;
//            v.insert(v.begin(), n / 2, 2);
//            n = 0;
//        }
//        // If x = 1 and n is odd
//        else if (x == 1 && n % 2 != 0) {
//            if (k == 2) {
//                cout << "NO" << endl;
//                continue;
//            } else {
//                n -= 3; // Reduce n by 3
//                cnt = 1; // Count the 3 added
//                v.emplace_back(3); // Add 3 to the vector
//                if (n >= 2) {
//                    cnt += n / 2; // Count the 2s
//                    v.insert(v.begin(), n / 2, 2); // Add 2s to the vector
//                    n = 0; // Set n to 0
//                }
//            }
//        }
//
//        // Final output
//        if (n == 0) {
//            cout << "YES " << endl; // Output YES
//            cout << cnt << endl; // Output count
//            for (auto it : v) {
//                cout << it << " "; // Output the vector elements
//            }
//            cout << endl; // New line after vector output
//        } else {
//            cout << "NO" << endl; // Output NO if n is not 0
//        }
//    }
//}
