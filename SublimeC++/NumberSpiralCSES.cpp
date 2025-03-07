#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;
	while(t--){
		long long x,y; cin>>y>>x;
		long long ans = 0;

		if(x%2 == 0){
			if(y<=x){
				ans = (x-1)*(x-1) + 1 + y -1;
			}else{
				if(y%2 == 0){
					ans = (y-1)*(y-1) + 1 + y-1 + y-x;
				}else{
					ans = y*y - y + 1 - y + x;
				}
			}
		}else{
			if(y<=x){
				ans = x*x - y + 1;
			}else{
				if(y%2 == 0){
					ans = (y-1)*(y-1) + 1 + y-1 + y-x;
				}else{
					ans = y*y - y + 1 - y + x;
				}
			}
		}
		cout << ans << "\n";

	}
	return 0;
}