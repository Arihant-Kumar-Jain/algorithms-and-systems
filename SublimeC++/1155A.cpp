#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cout.tie(nullptr), cout.tie(nullptr);

	int n; cin>>n;
	string s; cin>>s;

	char maxi = s[0];
	char mini = s[0];
	int l, r;
	bool check = true;

	for(int i = 0; i<n ; i++){
		if(s[i] > maxi){
			maxi = max(s[i], maxi);
			l = i+1;
		}else if(s[i] == maxi){
			l = i+1;
			continue;
		}else{
			r = i+1;
			check = false;
			break;
		}
	}

	if(check == false){
		cout << "YES\n" << l << " " << r << "\n";
	
	}else{
		cout << "NO" << "\n";
	}
	

}