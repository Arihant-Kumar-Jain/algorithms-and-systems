#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        long long x, n;
        cin >> x >> n;

        for (int i = 1; i <= n; ++i) {
            if (x % 2 == 0) {
                x -= i;
            } else {
                x += i;
            }
        }

        cout << x << endl;
    }

    return 0;
}