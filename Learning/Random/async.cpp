#include <iostream>
#include <thread>
#include <future>
#include <chrono>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

ull findOdd(ull start, ull end){
	ull OddSum = 0;
	cout << "ThreadID (in findOdd): " << std::this_thread::get_id() <<endl;
	for(ull i = start; i<= end; i++){
		if(i&1) OddSum += i;
	}
	return OddSum;
}

int main(){
	ull start = 0; ull end = 1900000000;

	cout<<"Starting.." <<endl;
	cout << "ThreadID(main): " << std::this_thread::get_id() <<endl;
	std::future<ull> OddSum = std::async(std::launch::deferred, findOdd, start, end); //try for launch::async and launch::deffered and notice the threadID

	cout << "Waiting for result..." <<endl;
	cout << "OddSum: " << OddSum.get() << endl;

	cout << "completed!!" <<endl;
	return 0;
}
