#include <iostream>
#include <cmath> // Include cmath for ceil
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int total = n * m;

    for (int i = 1; i <= 9; i++) {
        int checkpoints = ceil(total * 0.1 * i); // Use ceil to round up
        cout << checkpoints; // Print checkpoints
        if (i < 9) cout << " "; // Add space between numbers
    }
    cout << endl; // End with a newline
}
