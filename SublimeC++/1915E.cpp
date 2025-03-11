#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve(){

		int n; cin>>n;
		vector<int> arr(n);

		for(int i = 0; i<n; ++i){
			cin>>arr[i];
		}

		long long sum = 0;
		map<long long, int> mpp;
		mpp[0] = 1;


		for(int i = 0; i<n; i++){
			arr[i] *= (i%2)?-1:1;
			sum += arr[i];
			if(mpp[sum]){
				cout << "YES"<<"\n";
				return;
			}
			++mpp[sum];
		}

		cout << "NO" <<"\n";
}

int main(){

	int tt; cin>>tt;

	while(tt--){
		solve();
	}
}