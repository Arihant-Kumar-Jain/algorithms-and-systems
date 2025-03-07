#include <iostream>
#include <string>
using namespace std;
#define optimize() ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main() {
    optimize();
    string input;
    getline(cin, input); 

    string s = "";
    for (char temp : input) {
        if (temp == '5') {
            s += '4';
        } else if (temp == '6') {
            s += '3';
        } else if (temp == '7') {
            s += '2';
        } else if (temp == '8') {
            s += '1';
        } else if (temp == '9') {
            if(s.length() == 0){
            	s+='9';
            }else{
            	s+='0';
            }
        } else {
            s += temp;
        }
    }

    cout << s << endl;
    return 0;
}