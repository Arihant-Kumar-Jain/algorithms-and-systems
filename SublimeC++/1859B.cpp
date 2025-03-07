#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main() {
    optimise();

    int tt; cin >> tt; 

    while (tt--) {
        int n; cin >> n; 
        vector<vector<int>> arr(n);
        long long sum = 0, globalMin = INT_MAX, globalSecondMin = INT_MAX;

        for (int i = 0; i < n; i++) {
            int temp; cin >> temp; 
            arr[i].resize(temp);
            long long firstMin = INT_MAX, secondMin = INT_MAX;

        
            for (int j = 0; j < temp; j++) {
                cin >> arr[i][j];
                if (arr[i][j] < firstMin) {
                    secondMin = firstMin;
                    firstMin = arr[i][j];
                } else if (arr[i][j] < secondMin) {
                    secondMin = arr[i][j];
                }
            }

           
            if (temp == 1) {
                secondMin = firstMin;
            }

            sum += secondMin; 
            globalMin = min(globalMin, firstMin); 
            globalSecondMin = min(globalSecondMin, secondMin); 
        }

       
        cout << (long long)(sum + globalMin - globalSecondMin) << endl;
    }
}