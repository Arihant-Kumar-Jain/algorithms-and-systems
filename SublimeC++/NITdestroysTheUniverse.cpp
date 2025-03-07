#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >>t;
	while(t--){
		int n; cin>>n; long arr[n]; int cnt = 0;

		

			
		for(int i = 0; i<n; i++){
			cin >>arr[i];
		}

		if(n ==1){
			if(arr[0] == 0){
				cout << 0 << "\n";
				continue;
			}else{
				cout << 1 << "\n";
				continue;
			}
		}

		int check_for_zero = 0;
		for(int i = 1; i<n; i++){
			if(arr[i] == 0){
				check_for_zero++;
			}
			if(cnt == 0){
				if(arr[i-1] != 0 && arr[i] == 0){
				cnt++;
				}
			}
			if(arr[i-1] == 0 && arr[i] != 0){
				cnt++;
			}
		}

		if(check_for_zero == 0){
			cnt = 1;
		}

		if(cnt >=2 ){
			cout << 2 <<endl;
		}else{
			cout << cnt<<endl;
		}
	
	}
return 0;
}