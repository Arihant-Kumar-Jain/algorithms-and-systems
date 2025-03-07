//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    
//    int t,n;
//    cin >>t;
//    
//    while(t--){
//        cin>>n;
//        
//        if(n<=9){
//            cout << n <<endl;
//            continue;
//        }
//        else{
//            int sum = 9;
//            while(n>=10){
//                if(n>=100){
//                sum += 9;
//                }
//                n = n/10;
//                }
//            if(n<10){
//                sum += n;
//   
//            cout << sum <<endl;
//            }
//            
//        }
//
//    }
//}

//we until 9 we can print n,
// for 1-9:n
//10-100: n/10          ->9
//101 - 1000: n/100     ->9
//1001 to 10000: n/1000 ->9
