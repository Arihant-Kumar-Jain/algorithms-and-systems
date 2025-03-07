#include <iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int limit;
	if(n%2 == 0){
		limit = n/2;
	}else{
		limit = (n+1)/2;
	}

	if(n == 1){
		cout << 1 <<endl;
		return 0;
	}

	if(n<=3 && n>1){
		cout << "NO SOLUTION" << "\n";
	}else{
		for(int i = limit; i>=1; i--){
			cout << 2*i-1 << " ";
		}
		for(int i = n-limit; i>=1; i--){
			cout << (2*i) << " ";
		}
	}

	return 0;
}