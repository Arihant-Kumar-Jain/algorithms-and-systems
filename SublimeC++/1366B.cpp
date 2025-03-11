#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n,x,m; cin>>n>>x>>m;
		int left = x, right = x;

		int tleft,tright;
		while(m--){
			cin>>tleft>>tright;

			if(tleft<=right){
				right = max(tright,right);
			}
			if(left<=tright){
				left = min(tleft, left);
			}

		}

		cout << right-left+1 <<"\n";


	}
}