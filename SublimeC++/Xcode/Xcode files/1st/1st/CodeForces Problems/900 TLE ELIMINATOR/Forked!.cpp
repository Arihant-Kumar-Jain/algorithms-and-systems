//#include <iostream>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int t,a,b,x,y,m,n;
//    cin>>t;
//    
//    while(t--){
//        cin>>a>>b>>x>>y>>m>>n;
//        if((abs(x-a) + abs(y-b)) == (abs(m-a) + abs(n-b))){
//            cout << (abs(x-a) + abs(y-b))-1 <<endl;
//        }else{
//            cout<<0<<endl;
//        }
//    }
//}
////sum of individual coordinates absolute of differences











//approach -2


//#include <iostream>
//#include <set>
//using namespace std;
// 
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
// 
//    int t,a, b, x1, y1, x2, y2;
//    cin >> t;
//    while (t--){
//        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
//        set<pair<int, int>> s;
//        
//        
//        if (a != b){
//            set<pair<int, int>> s = {{x1 + a, y1 + b}, {x1 - a, y1 + b}, {x1 + a, y1 - b}, {x1 - a, y1 - b}, {x1 + b, y1 + a}, {x1 - b, y1 + a}, {x1 + b, y1 - a}, {x1 - b, y1 - a}, {x2 + a, y2 + b}, {x2 - a, y2 + b}, {x2 + a, y2 - b}, {x2 - a, y2 - b}, {x2 + b, y2 + a}, {x2 - b, y2 + a}, {x2 + b, y2 - a}, {x2 - b, y2 - a}};
//            cout << 16 - s.size() << endl;
//        }else{
//            set<pair<int, int>> s = {{x1 + a, y1 + b}, {x1 - a, y1 + b}, {x1 + a, y1 - b}, {x1 - a, y1 - b}, {x2 + a, y2 + b}, {x2 - a, y2 + b}, {x2 + a, y2 - b}, {x2 - a, y2 - b}};
// 
//            cout << 8 - s.size() << endl;
//        }
//    }
//}
