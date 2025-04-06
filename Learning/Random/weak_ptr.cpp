#include <iostream>
using namespace std;

//user-defined-type
class UDT{
	public:
		UDT(){cout<<"UDT created...\n";}
		~UDT(){cout<<"UDT destroyed...\n";}
};

int main(){
	
	weak_ptr<UDT> ptr2;

	
	{
		shared_ptr<UDT> ptr1 = make_shared<UDT>();
		ptr2 = ptr1;
		cout << "Use count (in the inner scope): " << ptr1.use_count() << endl;
	}
//	cout << "Use count: " << ptr1.use_count()<<endl;
	cout << "Is the weak_ptr expired? -(1/0): " << ptr2.expired(); 
}
