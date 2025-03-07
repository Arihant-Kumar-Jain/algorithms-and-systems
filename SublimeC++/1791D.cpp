//TIME LIMIT EXCEEDED FOR 1ST SOLUTION:


// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// 	int tt; cin>>tt;

// 	while(tt--){
// 		int n; cin>>n;
// 		string s; cin>>s;

// 		unordered_set<char> uset1;
		

// 		int p = 0;
// 		int q = 0;

// 		int maxi = 0;

// 		//trying two pointer brute force
// 		for(int i = 0; i<n; i++){
// 			q = 0;
// 			if(uset1.find(s[i]) == uset1.end()){
// 				uset1.insert(s[i]);
// 				p++;

// 			}
// 			unordered_set<char> uset2;
// 			for(int j = i+1; j<n; j++){
// 				if(uset2.find(s[j]) == uset2.end()){
// 					uset2.insert(s[j]);
// 					q++;
// 				}
// 			}

// 			maxi = max(p + q, maxi);
// 		}

// 		cout << maxi << "\n";
// 	}
// 	return 0;
// }




//SECOND SOLUTION

// #include <iostream>
// #include <unordered_set>
// #include <vector>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//     int tt;
//     cin >> tt;

//     while (tt--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         vector<int> prefix(n, 0), suffix(n, 0);
//         unordered_set<char> seen;

        
//         for (int i = 0; i < n; i++) {
//             seen.insert(s[i]);
//             prefix[i] = seen.size();
//         }

//         seen.clear();

        
//         for (int i = n - 1; i >= 0; i--) {
//             seen.insert(s[i]);
//             suffix[i] = seen.size();
//         }

       
//         int maxi = 0;
//         for (int i = 0; i < n - 1; i++) {
//             maxi = max(maxi, prefix[i] + suffix[i + 1]);
//         }

//         cout << maxi << "\n";
//     }

//     return 0;
// }