#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		string s; cin>>s;
		int m = s.length();

		if(s[0] == s[m-1]){
			cout << s <<endl;
		}
	}
}