#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long t,n,k,x;
	cin>>t;
	while(t--){
		cin>>n>>k>>x;
		
		if((2*x >= k*(k+1)) && (2*x <= (n*(n+1) - (n-k)*(n-k+1)))){
			cout << "YES" << "\n";
		}else{
			cout << "NO" <<"\n";
		}
	}
	return 0;
}