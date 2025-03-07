#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin >>t;

	while(t--){
		int n; cin>>n; int arr[n];

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		bool check = true;

		for(int i = 0; i<n; i++){
			if(abs(arr[i] - i-1) <= 1 ){
				continue;
			}else{
				cout << "NO" << endl;
				check = false;
				break;
			}
		}

		if(check == true){
			cout << "YES" << "\n";
		}else{
			continue;
		}
	}
}