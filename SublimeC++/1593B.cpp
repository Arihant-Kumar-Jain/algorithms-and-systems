#include <iostream>
#include <climits>

using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t; 
	while(t--){
		string n; cin>>n;

		int ans = INT_MAX;
		

		string arr[4] = {"00", "25", "50", "75"};

		for(auto s : arr){

			int i = n.length()-1; int cnt=0; 
			while(n[i] != s[1] && i>=0){
				i--;
				cnt++;
				
			}

			if(i<0){
				continue;
			}

			i--;
			while(n[i] != s[0] && i>=0){
				i--;
				cnt++;
				
			}

			ans = min(ans, cnt);
				
		}

		cout << ans << "\n";

	}
}