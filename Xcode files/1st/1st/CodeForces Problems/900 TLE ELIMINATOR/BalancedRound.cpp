//#include <iostream>
//#include <vector>
//using namespace std;
//
//    int t,n,k;
//    cin>>t;
//    
//    while(t--){
//        cin>>n>>k;
//        vector<int> v(n);
//        vector<int> diff(n-1);
//        
//        for(int i = 0; i<n; i++){
//            cin>> v[i];
//        }
//        
//        sort(v.begin(), v.end());
//        
//        for(int i = 0; i<n-1; i++){
//            diff[i] = abs(v[i+1] - v[i]);
//            }
//        
//        int cnt = 0;
//        if(diff[0]>k){
//            diff[0] = 0;
//            ++cnt;
//        }
//        
//        for(int i = 1; i<n; i++){
//            if(diff[i-1] <k && diff[i]<k){
//                diff[i-1]=0;
//                diff[i] = 0;
//                cnt += 2;
//            }
//        }
//        
//        cout << cnt <<endl;
//    }
//}
