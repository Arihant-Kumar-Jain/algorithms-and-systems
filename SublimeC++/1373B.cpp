#include <iostream>
#include <algorithm>
using namespace std;

#define optimise() ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();

	int t; cin>>t;

	while(t--){
		string s; cin>>s;
		int cnt0 = 0, cnt1 =0;
		for(char it : s){
			if(it == '0'){
				cnt0++;
			}
			if(it == '1'){
				cnt1++;
			}
		}

		int cntans = min(cnt0, cnt1);
		if(cntans%2 == 0){
			cout << "NET" << "\n";
		}else{
			cout << "DA" <<"\n";
		}

	}
	return 0;
}