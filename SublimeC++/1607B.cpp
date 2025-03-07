#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		long long x,n; cin >>x>>n;
		long long ans = 0;

		if(abs(x)%2 == 1){
			if(n%2 == 0){
				if((n/2)%2 == 0){
					ans = 0;
				}else{
					ans = -1;
				}
			}else{
				if(n==1){
					ans = 1;
				}else{
					if(((n-1)/2)%2 == 0){
						ans = n;
					}else{
						ans = -1-n;
					}
				}
				
			}
		}else{
			if(n%2 == 0){
				if((n/2)%2 == 0){
					ans = 0;
				}else{
					ans = 1;
				}
			}else{
				if(n == 1){
					ans = -1;
				}else{
					if(((n-1)/2)%2 == 0){
						ans = -n;
					}else{
						ans = 1+n;
					}
				}
				
			}
		}

		long long fans = x+ans;
		cout << fans << "\n";
	}
}