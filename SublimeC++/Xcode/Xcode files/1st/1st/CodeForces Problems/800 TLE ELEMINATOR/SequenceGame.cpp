//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int t, n;
//    cin >> t;
//    
//    while(t--){
//        cin >> n;
//        vector<int> v(n);
//
//        for(int i = 0; i < n; i++){
//            cin >> v[i];
//        }
//
//        for(int i = 0; i < n - 1; i++){
//            if(v[i] > v[i+1]){
//                v.insert(v.begin() + i + 1, v[i+1]);
//                i++;
//                n++;
//            }
//        }
//        
//
//        cout << n << endl;
//
//        for (auto it : v){
//            cout << it << " ";
//        }
//        cout << endl;
//    }
//}


//time limit exceeded....so took help from chatgpt:

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int t, n;
//    cin >> t;
//
//    while(t--){
//        cin >> n;
//        vector<int> v(n);
//        
//        // Input the vector
//        for(int i = 0; i < n; i++){
//            cin >> v[i];
//        }
//
//        // Create a result vector and reserve space to avoid repeated resizing
//        vector<int> result;
//        result.reserve(2 * n); // In case all elements are duplicated, we need at most 2*n space
//
//        // Traverse the vector and build the result vector
//        for(int i = 0; i < n; i++){
//            result.push_back(v[i]);
//            if(i < n - 1 && v[i] > v[i+1]){
//                result.push_back(v[i+1]); // Duplicate the next element if needed
//            }
//        }
//
//        // Output the size of the modified vector
//        cout << result.size() << endl;
//
//        // Output the modified vector
//        for (auto it : result){
//            cout << it << " ";
//        }
//        cout << endl; // To move to the next line after each test case
//    }
//}
