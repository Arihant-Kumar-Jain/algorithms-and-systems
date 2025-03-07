#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int n; cin>>n; int arr[n];

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		int maxi = arr[n-1]-arr[0];

		for(int i = 1; i<n; i++){
			maxi = max(maxi, arr[i-1]-arr[i]);
			maxi = max(maxi, arr[n-1] - arr[i-1]);
			maxi = max(maxi, arr[i] - arr[0]);
		}

		cout << maxi << "\n";
	}
	return 0;
}