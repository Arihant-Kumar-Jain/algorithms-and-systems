#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);
	int t; cin>>t;
	while(t--){
		long long a,b; cin>>a>>b;
		if (a == b) {
			cout << "0 0" << "\n";
			continue;
		}
		long long ans1 = abs(a-b);
		long long ans2 = min(a%ans1, ans1-a%ans1);
		cout << ans1 << " " << ans2 << "\n";
	}
}