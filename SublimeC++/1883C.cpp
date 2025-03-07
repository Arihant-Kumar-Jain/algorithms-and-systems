#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int n,k; cin>>n>>k; int arr[n];

		int ans = INT_MAX;
		int cnteven = 0;

		for(int i = 0; i<n; i++){
			cin>>arr[i];

			if(arr[i]%2 == 0){
				cnteven++;
			}
		}

		for(int i = 0; i<n; i++){
			if(arr[i]%k == 0){
				ans = 0;
				break;
			}
			int boo = arr[i]%k;
			ans = min(ans, k-boo);
			if(ans == 0){
				break;
			}
		}

		if(k != 4){
			cout << ans << "\n";
		}else{
			if(cnteven >= 2){
				cout << 0 << "\n";
			}else{
				cout << min(2-cnteven, ans)<<"\n";
			}
		}
	}
}