#include <iostream>
using namespace std;
#define optimise() ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();
	int t; cin>>t;

	while(t--){
		int n; cin>>n;


		int cnt2 = 0;
		while(n%2 == 0 && n>1){
			cnt2++;
			n = n/2;
		}
		int cnt3 = 0;
		while(n%3 == 0 && n>1){
			cnt3++;
			n = n/3;
		}

		if((n == 1) && (cnt3>=cnt2)){
			cout << 2*cnt3 - cnt2 << "\n";
		}else{
			cout << -1 << "\n";
		}
	}
	return 0;
}