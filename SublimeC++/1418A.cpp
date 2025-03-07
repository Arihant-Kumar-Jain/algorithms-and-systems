#include <iostream>
using namespace std;

long long ans;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		ans =0;
		long long x,y,k; cin>>x>>y>>k;

		cout << (long long)(((y+1)*k)+(x-2) -1)/(x-1) + k << "\n";

	}
}