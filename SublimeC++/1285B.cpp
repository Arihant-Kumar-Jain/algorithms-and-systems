#include <iostream>
#include <vector>
using namespace std;

int solve(){
	int n; cin>>n;
	vector<long long> arr(n);

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	long long sum1 = 0;
	long long sum2 = 0;

	for(int i = 0; i<n; i++){
		sum1+=arr[i];
		if(sum1<=0) return 0;

		sum2 += arr[n-1-i];
		if(sum2<=0) return 0;
	}

	return 1;
}

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		if(solve()){
			cout <<"YES"<<"\n";
		}else{
			cout <<"NO" <<"\n";
		}
	}
}