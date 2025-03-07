#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;
		vector<pair<int, int>> vec(n); 
		// int arr[n];

		for(int i = 0; i<n; i++){
			int x; cin>>x;
			vec[i] = {x, i};
			// arr[i] = vec[i];
		}

		sort(vec.rbegin(), vec.rend());

		long long ans = 0;
		long long cnt = 1;

		for(int i = 0; i<n; i++){
			ans += (long long)2*vec[i].first*cnt;
			cnt += i%2;
		}

		cout << ans << "\n";


		cout << 0 << " ";


		vector<int> vec2(n);

		int x = 1;
		for(int i = 0; i<n; i++){
			if(i&1){
				vec2[vec[i].second] = x;
			}else{
				vec2[vec[i].second] = -x;
			}
			x += i%2;

			
			// int index = distance(vec.begin(), find(vec.begin(), vec.end(), arr[i]))+1;

		
			// if(index%2 == 0){
			// 	cout << -1*(index+1)/2<< " ";
			// }else{
			// 	cout << (index+1)/2 << " ";
			// }


		}

		for(int i = 0; i<n; i++){
			cout << vec2[i] << " \n"[i == n-1];
		}


	}
}