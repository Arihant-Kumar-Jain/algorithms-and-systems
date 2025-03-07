#include <iostream>
using namespace std;

int main(){
	int n; cin>>n; int arr[n];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	long ans = 0; int temp = 0;
	for(int i = 0; i<n-1; i++){
		if(arr[i]<=arr[i+1]){
			continue;
		}else{
			temp = arr[i] - arr[i+1];
			ans += temp;
			arr[i+1] += temp;
		}
	}

	cout << ans << "\n";

}