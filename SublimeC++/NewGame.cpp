#include <iostream>
#include<unordered_map>
#include <vector>
#include<algorithm>
using namespace std;
#define optimise() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
    optimise();
    int t; cin>>t;
    
    while(t--){
        int n,k;cin>>n>>k;
        unordered_map<int,int> hashmap;
        for(int i = 0; i<n; i++){
            int temp; cin>>temp;
            if(hashmap.find(temp) == hashmap.end()){
                hashmap.insert({temp, 1});
            }else{
                hashmap[temp]++;
            }
        }
        
        vector<int> vecmap(hashmap.size());
        for(auto it: hashmap){
            vecmap.emplace_back(it.second);
        }
        
        sort(vecmap.begin(), vecmap.end(), greater<int>() );
        
        int sum=0;
        for(int i =0; i<k; i++){
            sum += vecmap[i];
        }
        
        cout<< sum<< endl;
    }
}