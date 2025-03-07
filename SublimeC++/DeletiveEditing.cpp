#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n; cin>>n;

	 while(n--){
	 	string s,t; cin>>s>>t;
	 	int lenS = s.length();
	 	int lenT = t.length();

	 	int hashmap[30];
	 	memset(hashmap, 0, sizeof(hashmap));

	 	for(int i = 0; i<lenT; i++){
	 		int x = t[i] - 'A';
	 		hashmap[x]++;
	 	}

	 	string ans = "";
	 	for(int i = lenS-1; i>=0; i--){
	 		int x = s[i] - 'A';
	 		if(hashmap[x]){
	 			ans += s[i];
	 			hashmap[x]--;
	 		}
	 	}

	 	reverse(ans.begin(), ans.end());
	 	if(ans == t){
	 		cout << "YES" <<endl;
	 	}else{
	 		cout << "NO" <<endl;
	 	}


	}
}