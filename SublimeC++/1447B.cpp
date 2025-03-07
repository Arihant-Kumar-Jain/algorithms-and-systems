#include <iostream>
#include <climits>
using namespace std;

int arr[10][10];
long long sum = 0;


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n,m; cin>>n>>m;
		sum = 0; int cnt = 0; int mini = 100;



		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin>>arr[i][j];
				sum += abs(arr[i][j]);
				mini = min(mini, abs(arr[i][j]));
				if(arr[i][j]<0){
					cnt++;
				}
			}
		}

		if(cnt%2 == 0){
			cout << sum << "\n";
		}else{
			cout << sum - 2*mini << "\n";
		}

	}
}