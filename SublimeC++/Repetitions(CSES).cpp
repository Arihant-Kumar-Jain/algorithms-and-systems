#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);
	string s; cin>>s;

	int ans = 0; int temp = 0;
	for(int i  = 0; i<s.length()-1; i++){
		if(s[i] == s[i+1]){
			temp++;
		}else{
			ans = max(ans, temp);
			temp = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}