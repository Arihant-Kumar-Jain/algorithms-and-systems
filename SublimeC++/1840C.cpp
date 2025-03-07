#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
	int tt; cin>>tt;

	while(tt--){
		int n,k,q; cin>>n>>k>>q; int len = 0; int ans = 0;

		for(int i = 0; i<n; i++){
			int temp; cin>>temp;
			if(temp <= q){
				len++;
			}
			if(temp > q || i == n-1){
				if(len>=k){
					ans += (((len-k+2)*(len-k+1))/2);
				}
				len = 0;
			}
		}


		cout << ans <<"\n";


	}
}