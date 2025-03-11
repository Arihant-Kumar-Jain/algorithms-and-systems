#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	string s; cin>>s;

	for(int i = 0; i<s.size()-1; i++){
		if(s[i] == s[i+1]){
			if(i+1 != s.size()){
				if(s[i+2] != char(s[i]+1) && s[i] != 'z'){
					s[i+1] = char(s[i]+1);
				}else{
					if(s[i] != 'a' && s[i+2] != 'a'){
						s[i+1] = 'a';
					}else if(s[i] != 'b' && s[i+2] != 'b'){
						s[i+1] = 'b';
					}else{
						s[i+1] = 'e';
					}
					
				}
			}
		}
		cout<<s[i];
	}
	cout<<s[s.size()-1];




}