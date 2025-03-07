#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);
        set<int> diffs;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            int diff = abs(temp - (i + 1)); 
            if (diff != 0) {
                diffs.insert(diff); 
            }
        }

        if (diffs.empty()) {
            cout << 0 << endl;
            continue;
        }

        
        int gcd_result = *diffs.begin(); 
        for (int d : diffs) {
            gcd_result = gcd(gcd_result, d);
            if (gcd_result == 1) { 
                break;
            }
        }

        cout << gcd_result << endl; 
    }

    return 0;
}