#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i<n; i++){
        	cin>>arr[i];
        }
        bool skip = false;
        int ans = 0;
        for(int i = n - 2; i >= 0; i--){
        	while(arr[i] >= arr[i + 1] && arr[i] > 0){
            	arr[i] /= 2;
            	ans++;
        	}
        	if(arr[i] == arr[i+1]){
           	 	cout << -1 << '\n';
           	 	skip = true;
           	 	break;
       		}
   		 }
   		 if (skip == false){
   		 	cout << ans << '\n';
   		 }else{
   		 	continue;
   		 }
		

    }
}