#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t; cin>>t;

	while(t--){


		long long n; cin>>n;
		long long min = 0; long long max = 0;

		if((n<4) || (n%2 == 1)){
			cout << -1 <<endl;
			continue;
		}

		if(n%4 == 0){
			max = n/4;
			if(n%6 == 0){
				min = n/6;
			}else if(n%6 == 4){
				min = n/6+1;
			}else if(n%6 == 2){
				min = n/6+1;
			}else{
				cout << -1 <<endl;
				continue;
			}
		}else if(n%4 == 2){
			max = n/4;

			if(n%6 == 0){
				min = n/6;
			}else if(n%6 == 4){
				min = n/6+1;
			}else if (n%6 == 2){
				min = n/6+1;
			}else{
				cout << -1 <<endl;
				continue;
			}
		}else{
			cout << -1 <<endl;
			continue;
		}

		cout << min << " " <<max <<endl;
	}
}