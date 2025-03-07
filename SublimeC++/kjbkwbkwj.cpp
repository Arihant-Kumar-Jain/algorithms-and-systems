#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        if (n <= 4) {
            cout << -1 << "\n";
            continue; 
        }

        vector<int> arr(n);

        if (n % 2 == 0) {
   
            for (int i = 0; i < n / 2; ++i) {
                arr[i] = 2 * i + 1;
            }
     
            arr[n / 2 - 1] = 5;
            arr[2] = n - 1;

    
            for (int i = n / 2; i < n; ++i) {
                arr[i] = (i - n / 2 + 1) * 2;
            }
            arr[n / 2] = 4;
            arr[n / 2 + 1] = 2;
        } else {
           
            for (int i = 0; i <= n / 2; ++i) {
                arr[i] = 2 * i + 1;
            }
           
            arr[n / 2] = 5;
            arr[2] = n;

            
            for (int i = n / 2 + 1; i < n; ++i) {
                arr[i] = (i - n / 2) * 2;
            }
            arr[n / 2 + 1] = 4;
            arr[n / 2 + 2] = 2;
        }

        for (int it : arr) {
            cout << it << " ";
        }
        cout << endl;
    }
}