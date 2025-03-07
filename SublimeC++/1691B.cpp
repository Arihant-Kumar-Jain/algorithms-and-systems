#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cout.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin >> n;
		int arr[n];

		for(int i = 0; i<n; ++i){
			cin>>arr[i];
		}

		int l = 0; int r = 0;
		vector<int> vec(n);
		for(int i = 0; i<n; i++){
			vec[i] = i+1;
		}

		bool ans = true;
		while(r<n){
			while(r<n-1 && arr[r] == arr[r+1]){
				++r;
			}if(l == r){
				ans = false;
			}else{
				rotate(vec.begin()+ l, vec.begin()+r, vec.begin() + 1+r);
			}

			l = r+1;
			++r;
		}

		if(ans){
			for(auto &it : vec){
				cout << it << " ";
			}
		}else{
			cout << -1;
		}

		cout << "\n";
	}

}