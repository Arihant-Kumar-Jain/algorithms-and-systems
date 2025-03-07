//#include <iostream>
//using namespace std;
//
//int main(){
//    int t,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>n;
//        int c1 = 0,c2 = 0;
//        
//        for(int i = 0; i<n; i++){
//            int m;
//            cin>>m;
//            if(m == 1){
//                c1++;
//            }
//            else{
//                c2++;
//            }
//        }
//        
//        if(c1>c2 && c2%2 == 0){
//            cout << 0 <<endl;
//            continue;
//        }
//        
//        if(c1>c2 && c2%2 != 0){
//            cout << 1 <<endl;
//            continue;
//        }
//        
//        if (c1 == c2 && c2%2 != 0){
//            cout << 1 <<endl;
//            continue;
//        }
//        
//        if (c1 == c2 && c2%2 == 0){
//            cout << 0 <<endl;
//            continue;
//        }
//        
//        
//        if(c1 < c2 && c2%2 == 0){
//            int cnt = 0;
//            while(c1<c2){
//                c2 -= 2;
//                c1 += 2;
//                cnt++;
//            }
//            cout << cnt*2 <<endl;
//            continue;
//        }
//        
//        if(c1 < c2 && c2%2 != 0){
//            int cnt = 0;
//            while(c1<c2 || c2%2 != 0){
//                c2 -= 1;
//                c1 += 1;
//                cnt++;
//            }
//            cout << cnt <<endl;
//            continue;
//        }
//    }
//}
