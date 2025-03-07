#include <iostream>
#include <vector>
using namespace std;
 
#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
int main() {
    optimise();
    int t; 
    cin >> t;
 
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int max_rating = 0;
 
        for (int l = 0; l < n; ++l) {
            for (int r = l; r < n; ++r) {
                int current_rating = 0;
 
             
                for (int i = 0; i < l; ++i) {
                    if (a[i] > current_rating) {
                        current_rating++;
                    } else if (a[i] < current_rating) {
                        current_rating--;
                    }
                }
 
           
                for (int i = r + 1; i < n; ++i) {
                    if (a[i] > current_rating) {
                        current_rating++;
                    } else if (a[i] < current_rating) {
                        current_rating--;
                    }
                }
 
                
                max_rating = max(max_rating, current_rating);
            }
        }
 
        cout << max_rating << endl;
    }
 
    return 0;
}