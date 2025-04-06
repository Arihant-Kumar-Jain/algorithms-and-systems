#include <iostream>
using namespace std;

int main(){
	char* buffer = new char[8];
	memset(buffer, 0, 8); //the pointer, number to initialise with, bytes of memory
	delete[] buffer; //since, it is an array type pointer
}
