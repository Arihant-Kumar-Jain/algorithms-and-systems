#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;
		char c; cin>>c;
		string s; cin>>s;

		if(n==1 || c == 'g'){
			cout << 0 <<"\n";
			continue;
		}

		s = s+s;

		int maxi = 0; int last = 0; 

		for(int i = 2*n-1; i>= 0; i--){
			if(s[i] == 'g'){
				last = i;
			}
			if(s[i] == c){
				maxi = max(maxi, last - i);
			}
		}

		cout << maxi << "\n";

	}
}