#include <iostream>
using namespace std;

typedef struct employee{

	int eId;
	char level;

} ep;

int main(){
	// int a = 20;
	// int *p;
	// p = &a;
	// cout << sizeof(int*) << "\n";

	ep rohan;
	rohan.eId = 12;
	rohan.level = 'A';

	cout << rohan.level;
}