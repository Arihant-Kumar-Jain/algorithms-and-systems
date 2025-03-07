#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n,k; cin>>n>>k;

		vector<int> a(n);
		vector<int> b(n);

		for(int i = 0; i<n; i++){
			cin>>a[i];
		}

		for(int i = 0; i<n; i++){
			cin>>b[i];
		}


		long long sum = 0;
		long long ans = 0;
		long long maxi = -1;


		for(int i = 0; i<n &&  i<k; i++){
			sum += a[i];
			if(b[i] > maxi){
				maxi = b[i];
			}
			long long foo = sum + (k-i-1)*maxi;
			ans = max(ans, foo);
		}	


		cout << ans <<"\n";
	}
}