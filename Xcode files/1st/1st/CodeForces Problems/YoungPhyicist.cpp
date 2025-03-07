//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//
//    vector<vector<int>> arr(n, vector<int>(3));
//
// 
//    for (int i = 0; i < n; i++){
//        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//    }
//
//    int add = 0;
//
//    for (int i = 2; i >= 0; i--){
//       
//        for (int j = 0; j < n; j++){
//            add += arr[j][i];
//        }
//    }
//
//    if (add == 0){
//        cout << "YES" << endl;
//    }
//    else{
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//
//    vector<vector<int>> arr(n, vector<int>(3));
//
//    for (int i = 0; i < n; i++){
//        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//    }
//
//    int sumX = 0, sumY = 0, sumZ = 0;
//
//    for (int i = 0; i < n; i++){
//        sumX += arr[i][0];
//        sumY += arr[i][1];
//        sumZ += arr[i][2];
//    }
//
//    if (sumX == 0 && sumY == 0 && sumZ == 0){
//        cout << "YES" << endl;
//    }
//    else{
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}
