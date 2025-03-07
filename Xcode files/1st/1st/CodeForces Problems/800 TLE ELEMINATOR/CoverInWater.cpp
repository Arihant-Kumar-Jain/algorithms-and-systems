//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main () {
//    int t, n;
//    string s;
//    cin >> t;
//    
//    while(t--){
//        cin >> n >> s;
//        vector<int> v;
//        int cnt = 0;
//        
//        for(int i = 0; i < n; i++){
//            if(s[i] == '.'){
//                cnt++;
//            }
//
//            if(s[i] == '#' && (i+1 == n || s[i+1] != '#') && cnt != 0){
//                v.push_back(cnt);
//                cnt = 0;
//            }
//
//        }
//        
//        if(cnt != 0){
//            v.push_back(cnt);
//        }
//        
//        int sum =0;
//        bool check = false;
//        for(int count : v){
//            if (count >= 3){
//                check = true;
//                break;
//            }
//            else{
//                sum = sum + count;
//                
//            }
//        }
//        
//        if (check == true){
//            cout << 2;
//        }
//        else{
//            cout << sum;
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}
