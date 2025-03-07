#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)


int main(){
	optimise();
	int tt; cin>>tt;

	while(tt--){
		int n,k; cin>>n>>k;
		vector<int> arr(n); vector <pair<int, int>> ans(n); 

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		for(int i = 0; i<n; i++){
			if(arr[i]%k == 0){
				ans[i] = {0, i+1};
			}else{
				ans[i] = {k-(arr[i]%k), i+1};
			}
		}

		sort(ans.begin(), ans.end());

		for(auto &it : ans){
			cout << it.second << " ";
		}


		cout << "\n";
		
	}
}