//#include <iostream>
//using namespace std;

//int main() {
//    
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
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
//        
//        for (int i = 0; i < n - 1; i++) {
//            if ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)) {
//                arr[i + 1] = 2;
//                ++cnt;
//            }
//            if((arr[i] % 2 == 1 && arr[i + 1] % 2 == 1)){
//                arr[i+1] = 3;
//                ++cnt;
//            }
//        }
//        
//        cout << cnt << endl;
//    }
//}
