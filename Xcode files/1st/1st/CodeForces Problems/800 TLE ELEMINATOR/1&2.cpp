//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int t, n;
//    cin >> t;
//
//    while (t--) {
//        cin >> n;
//        vector<int> arr(n);
//
//        int cntOf2 = 0;
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//            if (arr[i] == 2) {
//                cntOf2++;
//            }
//        }
//
//        if (cntOf2 % 2 == 1) {
//            cout << -1 << endl;
//            continue;
//        }
//
//     
//        int req = cntOf2 / 2;
//        int count = 0, pos = -1;
//
//        for (int i = 0; i < n; i++) {
//            if (arr[i] == 2) {
//                count++;
//            }
//            if (count == req) {
//                pos = i + 1;
//                break;
//            }
//        }
//
//        cout << pos << endl;
//    }
//
//    return 0;
//}
