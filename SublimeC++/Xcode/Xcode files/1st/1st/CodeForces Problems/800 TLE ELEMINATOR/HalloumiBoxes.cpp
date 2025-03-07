//#include <iostream>
//using namespace std;
//
//int main() {
//    int t, n, k;
//    cin >> t;
//    
//
//    while (t--) {
//        cin >> n >> k;
//        int arr[n];
//        
//        // Reading the array values
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        
//
//        // Condition for k == 1
//        if (k == 1) {
//            bool allEqual = true;
//            for (int i = 1; i < n; i++) {
//                if(arr[i-1] <= arr [i]){
//                    allEqual = true;
//                }
//                else{
//                    allEqual = false;
//                    break;
//                }
//
//            }
//            if (allEqual) {
//                cout << "YES" << endl;
//            } else {
//                cout << "NO" << endl;
//            }
//        } else {
//            // If k > 1, always print "YES"
//            cout << "YES" << endl;
//        }
//    }
//
//    return 0;
//}




