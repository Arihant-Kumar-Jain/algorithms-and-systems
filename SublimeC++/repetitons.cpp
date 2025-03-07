#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);
	string s; cin>>s;

	int ans = 1; int temp = 1;
	for(int i  = 0; i<s.length()-1; i++){
		if(s[i] == s[i+1]){
			temp++;
		}else{
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);
	cout << ans << "\n";
	return 0;
}