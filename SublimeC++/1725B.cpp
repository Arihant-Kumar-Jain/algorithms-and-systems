#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void solution(){

}

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	
	
		int n; float d; cin>>n>>d;
		vector<float> arr(n);

		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}

		sort(arr.begin(), arr.end());

		int sum = 0;
		int win = 0;
		for(int i = n-1; i>=0; i--){
			if(sum >= n){
				break;
			}
			int p = ceil(d/arr[i]);
			int p1 = (int)(d/arr[i]);

			if(p1 != p){
				if(p>=(n-sum+1)){
					break;
				}
			}else{
				if(p >= (n-sum)){
					break;
				}
			}

			

			if(p1 != p){
				sum += p;
				win++;
			}else{
				sum+=p+1;
				win++;
			}
			
		}

		cout << win << "\n";

	
}