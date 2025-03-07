#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main(){
	optimise();
	int tt; cin>>tt;
	while(tt--){
		int n,p; cin>>n>>p;
		vector <int> arrA(n); vector<int> arrB(n);
		long long ans = p;
		

		for(int i = 0; i<n; i++){
			cin>>arrA[i];
		}

		for(int i = 0; i<n; i++){
			cin>>arrB[i];
		}

		map<long, long long> mpp;
		for(int i = 0; i<n; i++){
			mpp[arrB[i]] += arrA[i];
		}
		n--;

		mpp[p] += n;

		//till now i have saved everything in a map where,
		//cost --> key and total possible sharing-->value of key

		for(auto &it: mpp){
			if(n > 0){
				while(n>0 && it.second>0){
					ans += it.first;
					it.second--;
					n--;
				}
				
			}
		}

		cout << ans <<endl;

	}
}