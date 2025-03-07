include <iostream>
using namespace std;
#define optimise() ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();

	int t; cin>>t;

	while(t--){
		int n,k,arr[n];; cin>>n>>k;

		for(int i = 0; i<n*k; i++){
			cin>>arr[i];
		}

		int m = 0;
		if(n%2 == 0){
			m = n/2;
		}else{
			m = (n+1)/2;
		}

		long long sum = 0;
		for(int i = m; i <n*k; i += k){
			sum += arr[i];
		}

		cout << sum << "\n";

	}
	return 0;
}