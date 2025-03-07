#include <iostream>
#include <vector>
using namespace std;

int main(){
	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;

		string s; cin>>s;

		vector<bool> a(26);
		

		for(int i = 0; i<n; i++){
			a[s[i]-'a'] = true;
		}

		int ans = 0;

		for(int i = 0; i<n; i++){
			if(!a[s[i]-'a']){
				continue;
			}

			a[s[i]-'a'] = false;
			ans += n-i; 
		}

		cout << ans <<"\n";
	}
}