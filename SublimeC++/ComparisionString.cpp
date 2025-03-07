#include <iostream>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
typedef long long ll;

int main(){
	ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; string s; cin>>n>>s;

		int cnt = 1; int ans = 1;
		REP(i, 1, n){
			if(s[i] != s[i-1]){
				cnt = 1;
			}else{
				cnt++;
			}
			ans = max(ans, cnt);
		}
		
		cout << ans+1 << " \n";
	}
	return 0;
}