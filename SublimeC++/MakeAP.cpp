#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int a,b,c;
		cin>>a>>b>>c;

		int new_a = b-(c-b);
		if(new_a >= a && new_a != 0 && new_a % a == 0){
			cout << "YES" <<endl;
			continue;
		}

		int new_b = a+(c-a)/2;
		if(new_b >= b && new_b != 0 && new_b % b == 0 && (c-a)%2 == 0){
			cout << "YES" <<endl;
			continue;
		}

		int new_c = b+(b-a);
		if(new_c >= c && new_c != 0 && new_c % c == 0){
			cout << "YES" <<endl;
			continue;
		}

		cout << "NO" <<endl;
	}

	return 0;
}