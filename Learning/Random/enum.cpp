#include <iostream>
using namespace std;

enum Example : unsigned char{
	A,B,C
};


int main(){
	int x = 1;
	if(x == B) cout << "yes\n";
	return 0;
}
