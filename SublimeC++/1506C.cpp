#include <bits/stdc++.h>
using namespace std;

void solve(string a, string b){
	int n = a.size(), m = b.size();
	int ans = 0;

	for(int x = 1; x<=min(n,m); x++){
		for(int y = 0; y <= n-x; y++){
			for(int z = 0; z <= m - x; z++){
				if(a.substr(y, x) == b.substr(z, x)){
					ans = max(ans, x);
				}
			}
		}
	}

	cout <<  n+m-2*ans << "\n";
}

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		string a,b; cin>>a>>b;
		solve(a, b);
	}
}