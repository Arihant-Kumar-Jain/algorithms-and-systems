#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;

		long long cnt0 = 0, cnt1 =0;
		while(n--){
			long long temp; cin>>temp;
			if(temp == 1){
				cnt1++;
			}
			if(temp == 0){
				cnt0++;
			}
		}

		if((n==2) && cnt1 ==1 && cnt0 ==1){
			cout << 2 << "\n";
		}

		if(cnt1 == 0){
			cout << 0 <<"\n";
		}else{
			if(cnt0 == 0){
				cout << cnt1 << "\n";
			}else{
				cout << (long long)pow(2, cnt0) * cnt1<< "\n"; //learned to use typecasting
			}
		}
	}
}