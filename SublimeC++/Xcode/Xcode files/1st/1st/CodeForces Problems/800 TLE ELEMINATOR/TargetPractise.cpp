//#include <iostream>
//using namespace std;
//
//int main() {
//
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin >> t;
//
//    while ( t-- ) {  char c;  int score = 0;
//
//        for (int i = 1; i <= 10; ++i)
//        {
//            for (int j = 1; j <= 10; ++j)
//            {
//                cin >> c;
//
//                if (c == 'X')
//                {
//                    if (i < 6)
//                    {
//                        int z = 0;
//                        while (z < 5)
//                        {
//                            if ( (j-i+z) >= 0 && (i+j-z-11) <= 0 )
//                            {
//                                score += (i-z) ;
//                                break;
//                            }
//                            ++z;
//                        }
//                    }
//
//                    else
//                    {
//                        int z = 0;
//                        while (z < 5)
//                        {
//                            if ( (i+j+z-11) >= 0 && (j-i-z) <= 0 )
//                            {
//                                score += (11-i-z) ;
//                                break;
//                            }
//                            ++z;
//                        }
//                    }
//                }
//            }
//        }
//
//        cout << score << endl;
//    }
//
//    return 0;
//}
