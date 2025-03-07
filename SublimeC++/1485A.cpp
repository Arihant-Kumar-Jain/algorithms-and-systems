#include <iostream>
using namespace std;


int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int tt; cin>>tt; long long x, temp_a, temp_b, ans;

	while(tt--){
		long long a,b; cin>>a>>b; 

		if(a == 0){
			cout << 0 << "\n";
			continue;
		}

		x = a+3; 

		for(int i = (b<2?2-b:0); i<x; i++){ //as temp_b cannot be less than 2 for division
			temp_b = b+i;
			temp_a = a;
			ans = i;

			while(temp_a){
				temp_a /= temp_b;
				++ans;
			}

			if(ans<x) x = ans;

		}

		cout << x << "\n";


	}
}