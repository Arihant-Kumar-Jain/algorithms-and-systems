#include <iostream>
#include <mutex>
#include <thread>
#include <condition_variable>
using namespace std;
condition_variable cv;
mutex m1;

long long balance = 0;

void addMoney(int money){
	lock_guard<mutex> lg(m1);
	balance += money;
	cout << "Amount added total balance: " << balance <<endl;
	cv.notify_one();
}

void withdrawMoney(int money){
	unique_lock<mutex> ul(m1);
	cv.wait(ul, []{return (balance!=0)?true:false;});
	if(balance>=money){
		balance-=money;
		cout << "Final balance after deduction: " << balance <<endl;
	}
	else{
		cout << "Amount cant be withdrawn due to insuffient balance. The current balance is: " << balance << endl;
	}
}


int main(){
	thread t1(withdrawMoney, 500);
	thread t2(addMoney, 500);

	t1.join();
	t2.join();

	return 0;
}
