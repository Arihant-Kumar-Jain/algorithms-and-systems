//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t, n;
//    cin >> t;
//    
//    while (t--) {
//        cin >> n;
//        int arr[n];
//        int cnt = 0;
//        vector<int> v;
//
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//
//
//        for (int i = 0; i < n; i++) {
//            if (arr[i] == 0) {
//                cnt++;
//            } else {
//                if (cnt > 0) {
//                    v.push_back(cnt);
//                    cnt = 0;
//                }
//            }
//        }
//
//
//        if (cnt > 0) {
//            v.push_back(cnt);
//        }
//
//        int mx = 0;
//        for (auto it : v) {
//            if (it > mx) {
//                mx = it;
//            }
//        }
//
//        cout << mx << endl;
//    }
//
//    return 0;
//}
