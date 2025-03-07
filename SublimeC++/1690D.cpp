#include <iostream>
#include <climits>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

	int tt; cin>>tt;
	while(tt--){
		int n, k; cin>>n>>k;
		string s; cin>>s;

		int arr[n+1];
		arr[0] = 0;
		int m = 0;

		for(int i = 1; i<=n; i++){
			
			if(s[i-1] == 'B'){
				m = 0;
			}else{
				m = 1;
			}
			arr[i] = arr[i-1] + m;
		}

		int maxResult = INT_MAX;

		for(int i = 0; i<=n-k; i++){
			maxResult = min(maxResult, arr[i+k] - arr[i]);
		}

		cout << maxResult << "\n";
	}
}