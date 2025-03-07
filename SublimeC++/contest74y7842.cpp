#include <iostream>
#include <climits>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int t; cin>>t;

	while(t--){
		int n; cin>>n; int arr[n];

		int cnt = 0; int sum = 0; int mina = 0; int totalsame = 0; int element = 0; int unique =0; 

		for(int i = 0;i<n; i++){
			cin>>arr[i];
			if(i>0){
				if(arr[i] < arr[i-1]){
					cnt++;
					if(sum != 0){
						mina = max(mina, sum);
					}
					
					sum = 0;

				}
				if(arr[i] == arr[i-1]){
					
					if(element == arr[i]){
						totalsame++;
						sum++;
						
					}else{
						totalsame += 2;
						sum += 2;
						unique++;
					}
					
					element = arr[i];

					if(i == n-1){
						mina = max(mina, sum);
					}
				}
			}
		}

	
		
		if(mina == 0){
			cout << cnt << endl;
		}else{
			cout << cnt + totalsame-mina -unique+1 <<endl;
		}
		

	}
}