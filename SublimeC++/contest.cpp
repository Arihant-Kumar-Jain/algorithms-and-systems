// #include <iostream>
// #include <map>
// using namespace std;
// #define REP(i,a,b) for (int i = a; i < b; i++)

// int main(){
//     ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

//     int t; cin>>t;

//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         int pdt = n*m;
//         char arr[pdt];
//         multimap<char, int> hashmap;


//         REP(i, 0, pdt){
//             cin>>arr[i];
//             if((arr[i] == '1')||(arr[i] == '5')||(arr[i] == '4')||(arr[i] == '3')){
//                 hashmap.insert({i, arr[i]});
//             }
//         }
        
//         int cnt = 0;

        
//     }

// }

#include <iostream>
using namespace std;

#define REP(i,a,b) for (int i = a; i < b; i++)

string containsSubstring(const std::string& s, const std::string& substring = "1100") {
    return s.find(substring) != std::string::npos ? "YES" : "NO";
}

int findSubstringIndex(const std::string& s, const std::string& substring = "1100") {
    size_t index = s.find(substring);
    return index != std::string::npos ? static_cast<int>(index) : -1;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t; 
    cin >> t;

    while (t--) {
        string s; 
        cin >> s;

        int n;
        cin >> n;

        int index = findSubstringIndex(s);
        bool found = (index != -1);

        while (n--) {
            int i;
            char v;
            cin >> i >> v;

            s[i - 1] = v;

            if (found) {
                if ((i - 1) > (index + 3) || (i - 1) < index) {
                    cout << "YES" << "\n";
                } else {
                    if( (i-1 == index) && (v == '1') ){
                        cout << "YES" << "\n";
                    }else if( (i-1 == index+1) && (v == '1') ){
                        cout << "YES" << "\n";
                    }else if( (i-1 == index+2) && (v == '0') ){
                        cout << "YES" << "\n";
                    }else if( (i-1 == index+3) && (v == '0') ){
                        cout << "YES" << "\n";
                    }else{
                        cout << "NO" << "\n";
                    }
                }
            } else {
                s[i-1] = v;
                cout << containsSubstring(s) << "\n";
            }
        }
    }

    return 0;
}