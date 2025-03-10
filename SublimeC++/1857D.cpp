#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

void solve(){
	int n; cin>>n;
	
	vector<pair<long long, int>> a(n);
	for(int i = 0; i<n; i++){
		long long t; cin>>t;
		a[i] = {t,i+1};
	}

	for(int i = 0; i<n; i++){
		long long temp; cin>>temp;
		a[i].first = a[i].first-temp;
	}

	sort(a.rbegin(), a.rend());

	int cnt = 1;
	long long maxi = a[0].first;

	for(int i = 1; i<n; i++){
		if(a[i].first != maxi) break;
		cnt++;
	}

	cout << cnt << "\n";

	for(int i = cnt-1; i>=0; i--){
		cout << a[i].second << " ";
	}

	cout << "\n";



}

int main(){
	optimise();

	int tt; cin>>tt;
	while(tt--){
		solve();
		
	}

}