#include <iostream>
#include <vector>
using  namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;
		vector<int> vec(n);

		for(int i = 0; i<n; i++){
			cin>>vec[i];
		}
		
		int ans = -1;
		for(int i = 0; i<n; i++){
			if(i != vec[i]){
				if(ans == -1){
					ans = vec[i];
				}else{
					ans &= vec[i];
				}
			}
		}
		cout << ans << "\n";
	}

}