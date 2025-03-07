//#include <iostream>
//using namespace std;
//
//int isCapital(char c){
//    if (c>='A' && c<= 'Z'){
//        return true;
//    }
//    else{
//        return false;
//    }
//}
//
//int main(){
//    string s;
//    cin >> s;
//    int count = 0;
//    
//    for (int i = 0; i <  s.length(); i++){
//        if (isCapital(s[i]) == true){
//            count++;
//        }
//    }
//    
//    if (count > s.length()/2){
//        transform(s.begin(), s.end(), s.begin(), ::toupper);
//        cout << s << endl;
//    }
//    else {
//        transform(s.begin(), s.end(), s.begin(), ::tolower);
//        cout << s <<endl;
//    }
//    
//    
//}
