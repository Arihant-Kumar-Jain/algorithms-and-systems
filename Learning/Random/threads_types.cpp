#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;




//method1: Function pointer
/*
void fun(int x){
	while(x-->0){
		cout<<x<<endl;
	}
}

int main(){
	thread t1(fun, 11);
	thread t2(fun, 10);
	t1.join();
	t2.join();
	return 0;
}
*/






//method 2: Lambda Functions
/*
int main(){
	thread t([](int x){while(x-->0) cout<<x<<endl;});
	t.join();
	return 0;
}
*/





//method 3: Functor (function object)
/*
class Base{
	public:
		void operator()(int x){
			while(x-->0){
				cout<<x<<endl;
			}
		}
};

int main(){
	thread t(Base(), 10);
	t.join();
	return 0;
}
*/




//method 4: Non static member function
/*
class Base{
	public:
		void run(int x){
			cout<<x<<endl;
		}
}

int main(){
	Base b;
	thread t1(&Base::run, &b, 10);
	t1.join();
	return 0;
}
*/





//method 5: Static member function
/*
class Base{
	public:
		static void run(int x){
			while(x-->0){
				cout << x << endl;
			}
		}
};

int main(){
	thread t1(&Base::run, 10);
	t1.join();
	return 0;
}
*/
