#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		string s; cin>>s; int m = s.length(); int cnt5 = 0; 

		for(int i = m-1; i>=0; i--){
			if(s[i] != '5'){
				cnt5++;
			}else{
				cnt5++;
				break;
			}
		}

		int cnt2 = 0;
		for(int i = m-1; i>=0; i--){
			if(s[i] != '2'){
				cnt2++;
			}else{
				cnt2++;
				break;
			}
		}

		int cnt7 = 0;
		for(int i = m-1; i>=0; i--){
			if(s[i] != '7'){
				cnt7++;
			}else{
				cnt7++;
				break;
			}
		}

		int cnt0 = 0;
		for(int i = m-1; i>=0; i--){
			if(s[i] != '0'){
				cnt0++;
			}else{
				cnt0++;
				break;
			}
		}

		int cntnext0 = cnt0;
		if(cnt0 != m){
			for(int i = m-cnt0-1; i>=0; i--){
				if(s[i] != '0'){
					cntnext0++;
				}else{
					cntnext0++;
					break;
				}
			}
		}

		//now we will take cases of 00, 25, 50, 75

		int case1 = cntnext0;
		int case2 = cnt2 + cnt5;
		int case3 = cnt5 + cnt0;
		int case4 = cnt7 + cnt5;

		int ans  = min(min(case1, case2), min(case2, case4)); 
		cout << ans <<endl;
		

		
	}
}