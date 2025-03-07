#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	cin>>t;

	while(t--){
		long long n;
		cin>>n;

		int cnt = 0;
		for(int i = 1; i<n+100; i++){
			if(n%i == 0){
				cnt++;
			}else{
				cout << cnt <<endl;
				break;
			}
		}
	}

}