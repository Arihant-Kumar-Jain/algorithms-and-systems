#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; 
    cin >> n; 
    vector<int> arr(n - 1); 

    for(int i = 0; i < n - 1; i++){
        cin >> arr[i]; 
    }

    sort(arr.begin(), arr.end()); 

    for(int i = 0; i < n - 1; i++){
        if(arr[i] != i + 1){ 
            cout << i + 1 << endl; 
            return 0; 
        }
    }

    cout << n << endl; 
    return 0; 
}