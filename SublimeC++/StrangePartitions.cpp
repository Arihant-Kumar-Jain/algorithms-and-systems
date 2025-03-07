#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		long long minans = 0;
		long long maxans = 0;
		long long sum = 0;

		while(n--){
			int temp; cin>>temp;
			sum += temp;
			maxans += (temp +x-1)/x;
		}

		
		minans = (sum+x-1)/x;

		cout << minans << " " << maxans << "\n";

	}
}