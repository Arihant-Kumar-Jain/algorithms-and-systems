#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; 
    cin >> t;
    unordered_map<string, int> umap; 

    while (t--) {
        string s; 
        cin >> s;

        if(umap[s] == 0){
        	cout << "OK" <<endl;
        	umap[s] = 1;
        }else{
        	cout << s<<umap[s]<<endl;
        	umap[s] ++;
        }
    }
    return 0;
}