#include <iostream>
#include <vector>
#include <set>  //honestly, wanna avoid binary search code lol 😂

using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n,w; cin>>n>>w;
		multiset<int> ms;

		for (int i = 0; i < n; ++i){
			int temp; cin>>temp;
			ms.insert(temp);
		}

		int height = 1, sl = w;

		while(!ms.empty()){
			auto it = ms.upper_bound(sl);

			if(it != ms.begin()){
				it--;
				int val = *it;
				sl -= val;
				ms.erase(it);
			}else{
				sl = w;
				height++;
			}
		}


		cout << height<<"\n";




	}
}