#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(){
	int n; cin>>n;
	unordered_map<int, int> umap;
	vector<vector<int>> vec;

	for(int i = 0; i<n; i++){
		int k; cin>>k;
		vector<int> a(k);
		for(int j = 0;j<k;j++){
			cin>>a[j];
			--a[j];
			++umap[a[j]];
		}
		vec.push_back(a);
	}

	for(int i = 0; i<n; i++){
		bool ok = false;
		for(int j = 0; j<vec[i].size(); j++){
			if(umap[vec[i][j]] == 1){
				ok = true;
				break;
			}
		}

		if(!ok){
			cout << "YES\n";
			return;
		}
	}

	cout << "NO\n";
	return;



}

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;
	while(tt--) solve();
	return 0;
}