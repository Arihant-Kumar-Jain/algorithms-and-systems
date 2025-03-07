#include <iostream>
#include <vector>
using namespace std;
#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();

	int t; cin>>t;

	while(t--){
		int n,k; cin>>n>>k; 
		long long ans = 0; 
		vector <int> arr(n*k);

		for(int i = 0; i<k*n; i++){
			cin>>arr[i];
		}

		int lmn;
		lmn = n*k - (k*((n/2) + 1));
		// cout << lmn << " " <<n << " " << k << endl;

		for(int i = 0; i<n*k; ++i){
			if(i == lmn){
				ans += arr[i];
				lmn += (n/2)+1;
			}
		}
		cout << ans <<"\n";
	}
	return 0;
}