#include <iostream>
#include <unordered_map>
#include<set>
using namespace std;


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;
	while(tt--){
		string s; cin>>s;

		unordered_map<int, int> mpp;
		int biggest = -1;
		for(auto it:s){
			mpp[it-'a'] += 1;
			if(mpp[it-'a'] > biggest){
				biggest = mpp[it-'a'];
			}
		}

		if(mpp.size() <= 1){   //all are aaa... type
			cout << "YES" <<"\n";
			continue;
		}else if(biggest>=3){  //bXbXb type
			set<int> ch;

			int m;
			for(m = 0; m<s.size(); m++){
				if(ch.find(s[m] - 'a') == ch.end()){
					ch.insert(s[m]-'a');
				}else{
					break;
				}
			}
			bool good = false;
			for(int i = m; i<s.size(); i++){
				if(s[i] != s[i-m]){
					cout << "NO" <<"\n";
					good = true;
					break;
				}
			}
			if(good){
				continue;
			}else{
				cout <<"YES"<<"\n";
				continue;
			}
		}else{
			
			// b(no of elements-1)b
			unordered_map<int, int> indexdiff;
			for(int i = 0; i<s.size();i++){
				if(mpp[s[i] - 'a'] == 2){
					if(indexdiff.find(s[i] - 'a') == indexdiff.end()){
						indexdiff[s[i] - 'a'] = i;
					}else{
						indexdiff[s[i] - 'a'] = i - indexdiff[s[i] - 'a'];
					}
				}
			}


			bool check = false;
			for(auto it: indexdiff){
				if(it.second <= (mpp.size()-1)){
					cout << "NO" <<"\n";
					check = true;
					break;
				}
			}


			if(check) continue;
			else{
				cout << "YES" <<"\n";
				continue;
			}
		}

	}
}