#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n,x; cin>>n>>x;
		int arr[n];

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		int cnt = 0;

		int maxi = arr[0];
		int mini = arr[0];

		for(int i = 1; i<n; i++){
			
			if(arr[i] > maxi){
				maxi = arr[i];
			}	
			if(arr[i] < mini){
				mini = arr[i];
			}	
			if(maxi - mini > 2*x){
				cnt++;
				maxi = arr[i];
				mini = arr[i];
			}
		}

		cout << cnt << "\n";
	}
	return 0;
}