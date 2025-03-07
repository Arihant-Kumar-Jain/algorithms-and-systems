#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int tt; cin>>tt;
	while(tt--){
		int n,k,b; long long s; cin>>n>>k>>b>>s;

		long long mfac = (long long)b*k;

		if(mfac > s){
			cout << -1 << " ";
		}else{
			if(s > ((long long)n*(k-1)+ mfac)){
				cout << -1 << " ";
			}else{
				long long diff = s - mfac;

				if(diff > k-1){
					cout << mfac + k-1 << " ";
					diff -= k-1;
				}else{
					cout << mfac + diff << " ";
					diff = 0;
				}



				for(int i = 0; i<n-1; i++){
					if(diff>k-1){
						cout << k-1 << " ";
						diff -= k-1;
					}else{
						cout << diff << " ";
						diff = 0;
					}
				}
			}
			
		}
		cout << "\n";
	}
	return 0;
}