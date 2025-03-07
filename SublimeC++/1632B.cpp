#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cout.tie(nullptr), cout.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;
		int m = n;

		if(n%2 == 0){
			while(m-2){
				m--;
				cout << m-2 << " ";
			}
			cout << n-2 << " " << n-1 << "\n";
		}else{
			while(m-1){
				m--;
				cout<<m-1<<" ";
			}
			cout << n-1 << "\n";
		}

	}
}