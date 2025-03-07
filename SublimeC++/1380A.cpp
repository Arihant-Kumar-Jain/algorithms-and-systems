#include <iostream>
using namespace std;
#define optimise() ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();

	int t; cin>>t;

	while(t--){
		int n; cin>>n; int arr[n];

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		bool flag = false;
		for(int i = 1; i<n-1; i++){
			if((arr[i]>arr[i-1]) && (arr[i+1]<arr[i])){
				cout << "YES" <<"\n";
				cout << i << " " << i+1 << " " <<i+2 << "\n";
				flag = true;
				break;
			}
		}

		if(flag == true){
			continue;
		}else{
			cout << "NO" << "\n";
		} 

	}
	return 0;
}