#include <iostream>
using namespace std;

//user defined type
class UDT{
	public:
	UDT(){cout << "udt created\n";}
	~UDT(){cout << "udt destroyed\n";}
};

int main(){
	shared_ptr<UDT> ptr1 = make_shared<UDT>();
	shared_ptr<UDT> ptr2 = ptr1; //unlike unique_ptr, shared pointers allow us to copy
	
	//we can check the reference count too
	cout << "use count = " << ptr1.use_count()<< endl;
	//it becomes rather interesting, when we print the same for ptr2
	cout << "use count = " << ptr2.use_count()<< endl;

	//we will now see its scope:
	{
		shared_ptr<UDT> ptr3 = ptr1;
		cout << "use count = " << ptr3.use_count()<< endl;
		cout << "use count = " << ptr1.use_count()<< endl;
	}//as soom as '}' comes, ptr3 becomes freed

	cout << "use count = " << ptr1.use_count()<< endl;
}
