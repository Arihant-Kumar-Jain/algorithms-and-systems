#include <iostream>
using namespace std;
#define REP(i,a,b) for (int i = a; i<b; i++)

int main(){
	ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	long long t;
	cin>>t;
	

	while(t--){
		int n,q;
		cin>>n>>q;
		long long arr[200006];

		long long precomp[200006];
		REP(i, 1, n+1){
			cin >>arr[i];
			precomp[i] = precomp[i-1];
			precomp[i] += arr[i];
			
		}

		while(q--){
			long long l,r,k;
			cin>>l>>r>>k;
			int arr2[n];

			long long sum = precomp[n] - (precomp[r] - precomp[l-1]) + k*(r-l+1);

			if(sum%2 == 1){
				cout << "YES"<< "\n";
			}else{
				cout << "NO" <<"\n";
			}
		}
	}
}