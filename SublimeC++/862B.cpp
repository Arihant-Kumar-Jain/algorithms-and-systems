#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[100005];
long long cnt[2];


void dfs(int node, int pnode, int color){

	cnt[color]++;

	for(int i = 0; i<arr[node].size(); i++){
		if(arr[node][i] != pnode){
			dfs(arr[node][i], node, !color);
		}
	}
}


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	for(int i = 1;i<t; i++){
		int n,m; cin>>n>>m;

		arr[n].push_back(m);
		arr[m].push_back(n);
	}

	dfs(1,0,0);

	cout << cnt[0]*cnt[1]-t+1;

}