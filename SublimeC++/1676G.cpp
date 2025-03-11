#include <iostream>
#include <vector>
using namespace std;

#define optimise ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int memoization(int root, vector<vector<int>> &arr, string &s, int &bal){
    int score = (s[root - 1] == 'W') ? 1 : -1;  
    
    for(auto it : arr[root]){
        score += memoization(it, arr, s, bal);
    }

    if(score == 0) bal++; 

    return score;
}

void solve(){
    int n; cin >> n;
    vector<vector<int>> arr(n + 1); 
    for(int i = 2; i <= n; i++){
        int temp; cin >> temp;
        arr[temp].push_back(i);
    }

    string s;
    cin >> s;

    int bal = 0;

    memoization(1, arr, s, bal);  
    cout << bal << "\n";
}

int main(){
    optimise;

    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}