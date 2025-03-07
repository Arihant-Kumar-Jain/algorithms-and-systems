#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve()
{
    int n, m; cin>>n>>m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin>>b[i];
 
    int prv = -1e9;
    set<int> B(b.begin(), b.end());
    for (int i = 0; i<n; i++)
    {
        auto pt = B.lower_bound(a[i] + prv);
        if (pt != B.end())
        {
            int res = (*pt) - a[i];
            if (a[i] < res && a[i] >= prv) res = a[i];
            prv = res;
        }
        else
        {
            if (a[i] < prv) {cout<<"NO"<<endl; return;}
            prv = a[i];
        }
    
    }

    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int tt; cin>>tt;

    while(tt--){
        solve();
    }
    return 0;
}