#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, r, b;
        cin >> n >> r >> b;

        int m = r / (b + 1);      
        int k = r % (b + 1);    

        string result;


        for (int i = 0; i < b + 1; ++i) {
            result.append(m, 'R'); 
            if (k > 0) {          
                result += 'R';
                --k;
            }
            if (i < b) {
                result += 'B';         
            }
        }

        cout << result << "\n";
    }

    return 0;
}