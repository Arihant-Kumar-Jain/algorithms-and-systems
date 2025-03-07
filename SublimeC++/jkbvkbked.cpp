#include <iostream>
#include <map>
using namespace std;

void solve() {
    int n, m, l;
    cin >> n >> m >> l;

    map<int, int> hurdle; // Stores hurdle position and height
    int total_powerups = 0;

    // Input hurdles
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        hurdle[a] = b;
    }

    for (auto &it : hurdle) {
        int position = it.first, height = it.second;
        int required_powerups = height; // Power-ups needed for this hurdle
        int powerups_used = 0;
        bool cleared = false;

        for (int i = 0; i < m; ++i) {
            int j, k;
            cin >> j >> k;

            if (j < position) { // Jump applies before hurdle
                required_powerups -= k;
                powerups_used++;
                if (required_powerups <= 0) {
                    cleared = true;
                    break;
                }
            }
        }

        if (!cleared) {
            cout << -1 << endl;
            return;
        }

        total_powerups += powerups_used;
    }

    cout << total_powerups << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve();
    }

    return 0;
}