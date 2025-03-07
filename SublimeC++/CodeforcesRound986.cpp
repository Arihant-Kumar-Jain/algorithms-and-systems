#include <iostream>
using namespace std;
#define REP(i, a, b) for (int i = a; i<b; i++)
#define optimise() ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
 
int main(){
	optimise();
	int t; cin>>t;
 
	while(t--){
		
		int n,x,y; cin>>n>>x>>y;
		string s; cin>>s;
 
		int posx = 0, posy = 0;
		bool flag = false;
		REP(i, 0, n){
 
			if(posx == x && posy == y){
				cout << "YES" <<endl;
				flag = true;
				break;
			}
 
			if(s[i] == 'E'){
				posx++;
			}else if(s[i] == 'W'){
				posx--;
			}else if(s[i] == 'N'){
				posy++;
			}else{
				posy--;
			}

			if((x/posx == y/posy) && (x%posx == 0 && y%posy == 0) && posx != 0 && posy!=0){
				cout << "YES" <<endl;
				flag = true;
				break;
				
			}
		}

		
		if(flag == true){
			continue;
		}else{
			cout <<"NO" <<endl;
		}
		
	}
	return 0;
}