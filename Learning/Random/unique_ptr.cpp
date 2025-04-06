#include <iostream>
#include <memory>
using namespace std;

class UDT{ //user-defined-type
public:
	UDT(){cout << "constructor called\n";}
	~UDT(){cout << "destructor called\n";}
};

int main(){
	unique_ptr<UDT[]> myptr = make_unique<UDT[]>(10); 
	//can be also written as
	unique_ptr<UDT[]> myptr_eq = unique_ptr<UDT[]>(new UDT[10]);

	//if we use - delete myptr....it will give error as we dont have to delete a unique pointer
	//we can still move(unique_ptr).

}
