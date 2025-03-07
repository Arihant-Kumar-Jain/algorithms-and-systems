#include <iostream>
using namespace std;

using ll = long long;

const ll MOD = 1000000007;

int main() {
	int tt; cin>>tt;

	while(tt--){
		ll n;
    	cin >> n;
    
    	ll sum_of_squares = ((n)*(n+1))%MOD;
    
    	ll result = (337 * ((ll)(sum_of_squares*(4*n-1))% MOD))%MOD;
    
    	cout << result << "\n";
	}
    
    
    return 0;
}