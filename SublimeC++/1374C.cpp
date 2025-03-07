#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;
		int ans = 0;

		string s; cin>>s;

		string b = "()"; int cnt = 0;

		for(int i = 0; i<n; i++){
			if(cnt == 0 && s[i] == ')'){
				ans++;
				continue;
			}else if(s[i] == '('){
				cnt++;
			}else{
				cnt--;
			}
		}



		
		cout << ans << "\n";
	}
}