#include <iostream>
#include <string>
using namespace std;
#define optimise() ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)


int main(){
	optimise();

	int t; cin>>t;

	while(t--){
		int n,m; cin>>n>>m;
		string x,s; cin>>x>>s;

		
		for(int i = 0; i<6; i++){
			if(x.find(s) == string::npos){
				x=x+x;
				if(i==5){
					cout << -1 <<"\n";
				}
				continue;
			}else{
				cout << i <<"\n";
				break;
			}

		}
	}
}