#include <iostream>
using namespace std;


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	string s; cin>>s;
	long long a=0,b=0,c=0;

	for(int i = 0; i<s.size(); ++i){
		if(s[i] == 'o') b += a;
		else if(i>0 && s[i-1] == 'v'){
			a++;
			c+=b;
		}
	}

	cout << c;


}