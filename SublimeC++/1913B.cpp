#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		string s; cin>>s;

		int cnt0 = 0, cnt1 = 0;
		for(char it: s){
			if(it == '0'){
				cnt0++;
			}else{
				cnt1++;
			}
		}


		int used = 0;
		for(int i = 0; i<s.length(); i++){
			
			if(s[i] == '1'){
				--cnt0;
			}else{
				--cnt1;
			}
			if(cnt0 < 0 || cnt1 < 0){
				break;
			}
			
			++used;
		}

		cout << s.length() - used <<"\n";
	}
}