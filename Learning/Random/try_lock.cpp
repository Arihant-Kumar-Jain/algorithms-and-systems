#include <iostream>
#include <thread>

using namespace std;
int counter = 0;
mutex mtx;

void increaseCounter(){
	for(int i = 0; i< 100000; i++){
		if(mtx.try_lock()){
			++counter;
			mtx.unlock();
		
		}	
	}
}

int main(){
	thread t1(increaseCounter);
	thread t2(increaseCounter);

	t1.join();
	t2.join();

	cout << counter << endl;

	return 0;
}
