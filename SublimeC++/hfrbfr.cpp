#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int n; cin>>n; long long arr[n]; fill(arr, arr+n, 0);

		if(n%2 == 0){
			for(int i = 1; i<n/2+1; i++){
				cout << i << " " << i <<" ";
			}

		}else{
			bool flag = false;
			long long k = 0;
			for(int i = 2; i*i < n; i++){
				if(n % (i*i -1) == 0){
					flag = true;
					k = i*i;
					break;
				}
			}
			if(flag == true){
				for(int i = n; i>0; i--){
					int m = (i+1)%k;
					arr[i] = (i+1)%k;
				}
				for(int i = 0; i<n; i++){
					cout << arr[i] <<" ";
				}
			}else{
				cout << -1;
			}

			
		}
		cout << "\n";
	}
	return 0;
}