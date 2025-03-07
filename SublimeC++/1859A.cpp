#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		vector<int> arr(n);

		for(int i = 0;i<n; i++){
			cin>>arr[i];
		}

		sort(arr.begin(), arr.end());

		if(arr[0] == arr[n-1]){
			cout << "-1" << "\n";
		}else{
			int cnt = 0;
			while(arr[cnt] == arr[0]){
				cnt++;
			}

			cout << cnt << " " << n-cnt<< "\n";

			for(int i = 0; i<cnt; i++){
				cout << arr[i] << " ";
			}
			cout << "\n";

			for(int i = cnt; i<n; i++){
				cout << arr[i] << " ";
			}
			cout << "\n";
		}

	}

}