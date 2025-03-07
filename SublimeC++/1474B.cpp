#include <iostream>
using namespace std;



int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		long long n, ans; cin>>n;
		ans = 1; bool check = true;

		if(n == 1){
			cout << 6 << "\n";
		}else if(n == 2){
			cout << 15 << "\n";
		}else if(n==3 || n==4){
			cout << 55 << "\n";
		}else{
			for(int i = n+1; ;i++){
				check = true;
				for(int j = 2; j*j<=i; j++){
					if(i%j == 0){
						check = false;
						break;
					}
				}
				if(check == true){
					ans *= i;
					break;
				}
			}

			for(int i = ans+n; ;i++){
				check = true;
				for(int j = 2; j*j<=i; j++){
					if(i%j == 0){
						check = false;
						break;
					}
				}
				if(check == true){
					ans *= i;
					break;
				}
			}

			cout << ans << "\n";
		}

	}
}