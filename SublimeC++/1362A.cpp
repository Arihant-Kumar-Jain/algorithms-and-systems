#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


	int tt; cin>>tt;

	while(tt--){
		long long a,b,total; cin>>a>>b;

		if(a==b){
			cout << 0 <<"\n";
			continue;
		}else if(a>b){
			if(a%b == 0){
				long long n = a/b;
				total = 0;
				while(n%2 == 0){
					n /= 2; 
					total++;

				}
				if(n != 1){
					cout << -1 << "\n";
					continue;
				}

			}else{
				cout << -1 << "\n";
				continue;
			}
		}else{
			total = 0;
			while(a<b){
				a *= 2;
				total++;
			}
			if(a != b){
				cout << -1 << "\n";
				continue;
			}
		}

		long long ans = 0;
		while(total){
			if(total >= 3){
				total -= 3;
				ans++;
			}else if(total >= 2){
				total -= 2;
				ans++;
			}else{
				total--;
				ans++;
			}
		}

		cout << ans << "\n";
	}
}