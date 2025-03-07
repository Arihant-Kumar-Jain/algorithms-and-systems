#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a, i<b; i++)

int solve(){
	int n; cin>>n; int arr[n];

		REP(i, 0, n){
			cin>>arr[i];
			if(i>0){
				if((abs(arr[i]-arr[i-1]) != 5) || (abs(arr[i]-arr[i-1]) != 7)){
					return "NO";
				}
			}
		return "YES";

}
int main(){
	int t; cin >>t;

	while(t--){
			solve();
		}
	}
}