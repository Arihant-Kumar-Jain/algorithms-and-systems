#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n; vector<int> vec(n);

		for(int i = 0; i<n; i++){
			cin>>vec[i];
		}

		sort(vec.rbegin(), vec.rend());

		for(auto &it: vec){
			cout << it << " ";
		}

		cout << "\n";


	}
}