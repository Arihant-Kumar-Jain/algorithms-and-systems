#include <iostream>
// #include <algorithm>
// #include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL), cin.tie(nullptr), cout.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n,m,i,j; cin>>n>>m>>i>>j;
        // vector<int> arr(4);
		
		// //(1,m), (n,1), (1,1), (n,m)
		// arr[0] = abs(i-1) + abs(j-m);
		// arr[1] = abs(i-n) + abs(j-1);
		// arr[2] = abs(i-1) + abs(j-1);
		// arr[3] = abs(i-n) + abs(j-m);

		// sort(arr.begin(), arr.end());

		// if(arr[3] == abs(i-n) + abs(j-m)){
		// 	cout << n << " " << m<< " ";
		// 	if(arr[2] == abs(i-1) + abs(j-1)){
		// 		cout << 1 << " " << 1 << "\n";
		// 	}else if(arr[2] == abs(i-n) + abs(j-1)){
		// 		cout << n << " " << 1 << "\n";
		// 	}else{
		// 		cout << 1 << " " << m << "\n";
		// 	}
		// } else if(arr[3] == abs(i-1) + abs(j-1)){
		// 	cout << 1 << " " << 1<< " ";
		// 	if(arr[2] == abs(i-n) + abs(j-m)){
		// 		cout << n << " " << m << "\n";
		// 	}else if(arr[2] == abs(i-n) + abs(j-1)){
		// 		cout << n << " " << 1 << "\n";
		// 	}else{
		// 		cout << 1 << " " << m << "\n";
		// 	}
		// } else if(arr[3] == abs(i-n) + abs(j-1)){
		// 	cout << n << " " << 1 << " ";
		// 	if(arr[2] == abs(i-n) + abs(j-m)){
		// 		cout << n << " " << m << "\n";
		// 	}else if(arr[2] == abs(i-n) + abs(j-m)){
		// 		cout << n << " " << m << "\n";
		// 	}else{
		// 		cout << 1 << " " << m << "\n";
		// 	}
		// } else{
		// 	cout << 1 << " " << m << " ";
		// 	if(arr[2] == abs(i-n) + abs(j-m)){
		// 		cout << n << " " << m << "\n";
		// 	}else if(arr[2] == abs(i-n) + abs(j-m)){
		// 		cout << n << " " << m << "\n";
		// 	}else{
		// 		cout << 1 << " " << 1 << "\n";
		// 	}
		// }

		cout << 1 << " " << 1 << " " << n << " " << m << "\n";



	}
}