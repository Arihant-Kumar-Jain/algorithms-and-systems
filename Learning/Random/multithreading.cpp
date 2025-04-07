#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull SumEven = 0;
ull SumOdd = 0;

void findEven(ull start, ull End){
	for(ull i = start; i<End; i++){
		if((i&1) == 0){
			SumEven += i;
		}
	}
}

void findOdd(ull start, ull End){
	for (ull i = start; i<End; i++){
		if((i&1) == 1){
			SumOdd += i;
		}
		
	}			
}


int main(){
	//we will print time for both without threads and with multithreading - 5 sec (initial) - 2 sec (after multitheading)
	ull start = 0, end = 1900000000;

	auto startTime = high_resolution_clock::now();
	
	thread t1(findEven, start, end);
	thread t2(findOdd, start, end);

	t1.join();
	t2.join();
//	findEven(start, end);
//	findOdd(start, end);

	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime);

	cout << "OddSum: "<< SumOdd<<endl;
	cout << "EvenSum: "<< SumEven<<endl;

	cout << "Sec: " << duration.count()/1000000 << endl;
	

}
