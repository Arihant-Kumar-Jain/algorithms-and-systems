#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> vec1(n), vec2(n);
        map<int, int> mpp1, mpp2;

        for (int i = 0; i < n; i++) {
        	cin >> vec1[i];
        }
        for (int i = 0; i < n; i++) {
        	cin >> vec2[i];
		}
      
        int len = 1;
        for (int i = 1; i < n; i++) {
            if (vec1[i] == vec1[i - 1]) {
                len++;
            } else {
                mpp1[vec1[i - 1]] = max(mpp1[vec1[i - 1]], len);
                len = 1;
            }
        }
        mpp1[vec1[n - 1]] = max(mpp1[vec1[n - 1]], len); 

       
        len = 1;
        for (int i = 1; i < n; i++) {
            if (vec2[i] == vec2[i - 1]) {
                len++;
            } else {
                mpp2[vec2[i - 1]] = max(mpp2[vec2[i - 1]], len);
                len = 1;
            }
        }
        mpp2[vec2[n - 1]] = max(mpp2[vec2[n - 1]], len); 

       
        int maxLength = 0;
        for (auto &it : mpp1) {
            mpp2[it.first] = max(mpp2[it.first], it.second + mpp2[it.first]);
        }
        for (auto &it : mpp2) {
            maxLength = max(maxLength, it.second);
        }

        cout << maxLength << "\n";
    }

    return 0;
}