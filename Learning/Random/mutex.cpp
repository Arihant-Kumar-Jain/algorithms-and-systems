#include <iostream>
#include <thread>
using namespace std;


//mutex : mutual exclusion
int myAmount = 0;
mutex m;

void addMoney(){
	m.lock();
	myAmount++; //race condition -- critical region
	m.unlock();
}

int main(){
	thread t1(addMoney);
	thread t2(addMoney);

	t1.join();
	t2.join();

	cout << myAmount << endl;

	return 0;
} 
