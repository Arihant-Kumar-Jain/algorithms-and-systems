//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int t, n, k;
//    string s;
//    cin >> t;
//    
//    while(t--) {
//        cin >> n >> k >> s;
//        
//        if(k == n - 1) {
//            cout << "YES" << endl;
//            continue;
//        }
//        
//        vector<char> v(s.begin(), s.end());
//        sort(v.begin(), v.end());
//        
//        vector<int> ct;
//        int t = 1;
//        for(int i = 1; i < n; i++) {
//            if(v[i] == v[i - 1]) {
//                t++;
//            } else {
//                ct.push_back(t);
//                t = 1;
//            }
//        }
//        ct.push_back(t);
//        
//        sort(ct.begin(), ct.end());
//        
//
//        for(int i = 0; i < ct.size() && k > 0; i++) {
//            if(ct[i]%2 == 1){
//                ct[i]--;
//                k--;
//            }
//        }
//        
//        sort(ct.begin(), ct.end());
//        
//        for(int i = 0; i < ct.size() && k > 0; i++) {
//            if(ct[i]%2 == 0 && k>1){
//                ct[i] -= 2;
//                k -= 2;
//            }
//            else if(k==1){
//                ct[i] --;
//                k--;
//            }
//        }
//        
//        
//
//        int odd = 0;
//        for(int count : ct) {
//            if(count % 2 == 1) {
//                odd++;
//            }
//        }
//        
//       
//        if(odd > 1) {
//            cout << "NO" << endl;
//        } else {
//            cout << "YES" << endl;
//        }
//    }
//}
