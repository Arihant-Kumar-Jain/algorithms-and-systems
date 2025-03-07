#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;


	while(tt--){
		int n; cin>>n;
		unordered_map<int, int> umap;

		bool check = false;

		for(int i = 0; i<n; i++){
			int x; cin>>x;
			umap[x]++;
	
		}

		for(auto it: umap){
			if(it.second > 1){
				cout << "YES" << "\n";
				check = true;
				break;
			}
		}

		if(check == false){
			cout << "NO" << "\n";
		}



	}
}