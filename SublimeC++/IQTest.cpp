#include <iostream>
using namespace std;

int main(){

		int even=0, odd=0;
		int n; cin>>n;
		int input[n];
		for(int i = 0; i<n; i++){
			cin>> input[i];
		}

		for(int i = 0; i<3; i++){
			if(input[i]%2 == 0){
				even++;
			}else{
				odd++;
			}
		}

		if(odd > even){
			for(int i = 0; i<n; i++){
				if(input[i]%2 == 0){
					cout << i+1 << endl;
					break;
				}
			}
		}else{
			for(int i =0; i<n; i++){
				if(input[i] %2 == 1){
					cout <<i+1 <<endl;
					break;
				}
			}
		}

	
}