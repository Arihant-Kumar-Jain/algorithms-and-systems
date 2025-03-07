//#include <iostream>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t,a,b,c,d,cnt = 0;
//    cin>>t;
//    
//    while(t--){
//        cin>>a>>b>>c>>d;
//        if(b>d){
//            cout << -1 <<endl;
//            cnt = 0;
//            continue;
//        }
//        while(b<d){
//            cnt++;
//            b++;
//            a++;
//        }
//        
//        if(a<c){
//            cout << -1 <<endl;
//            cnt = 0;
//            continue;
//        }
//        
//        while(c<a){
//            cnt++;
//            a--;
//        }
//        cout << cnt <<endl;
//        cnt = 0;
//    }
//}
