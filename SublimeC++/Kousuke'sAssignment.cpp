#include <iostream>
#include <unordered_map>
using namespace std;
#define optimise() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)


int main(){
	optimise();
	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		int arrSum[n];
		int prefsum = 0;

		int cnt0 = 0;
		for(int i = 0; i<n; i++){
			int temp; cin>>temp;
			prefsum += temp;
			arrSum[i] = prefsum;
			if(prefsum == 0){
				cnt0++;
			}
		}

		unordered_map<int, int> hashmap(n);
		for(auto it : arrSum){
			if(hashmap.find(it) == hashmap.end()){
				hashmap.insert({it, 1});
			}else{
				hashmap[it]++;
			}
			
		}

		int ans = 0;
		for(auto it : hashmap){
			ans += it.second/2 - cnt0;
		}

		cout << ans;
	}
}
