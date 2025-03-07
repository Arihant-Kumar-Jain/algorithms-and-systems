#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long t;
	cin>>t;

	while(t--){
		long long a,b,n, k;
		cin >> a >>b >>n;
		long long total_tme = b;
		while(n--){
			cin>>k;
			if(k < a){
				total_tme += k;
			}else{
				total_tme += a-1;
			}
		}
		cout << total_tme <<"\n";
	}
	return 0;
}