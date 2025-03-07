#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s,r;
		cin>>s>>r;

		int cnt0 = 0, cnt1 = 0;

		for(char it : s){
			if(it == '1'){
				cnt1++;
			}else{
				cnt0++;
			}
		}
		for(char m : r){
			if(cnt0 == 0 || cnt1 == 0){
				break;
			}

			if(m == '1'){
				cnt0--;
			}else{
				cnt1--;
			}
		}
		if((cnt0 == 0 && cnt1 == 1) || (cnt0 == 1 && cnt1 == 0)){
			cout << "YES" <<endl;
		}else{
			cout << "NO" <<endl;
		}


		

	}
}
