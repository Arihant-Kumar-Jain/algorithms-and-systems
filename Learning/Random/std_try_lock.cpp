#include <iostream>
#include <thread>

using namespace std;

int X=0,Y=0;
mutex m1,m2;

void doSomething(int time){
	this_thread::sleep_for(chrono::seconds(time));
}

void incrementXY(int& XorY, mutex& m, const char* desc){
	for(int i = 0; i<5; i++){
		m.lock();
		++XorY;
		cout << desc << XorY << endl;
		m.unlock();
		doSomething(1);
	}
}


void consumeXY(){
	int useCount = 5; 
	int XplusY = 0;
	while(1){
		int lockResult= try_lock(m1, m2);// we can explore possibility of individual locks
		if(lockResult == -1){  //-1 is =returned when the try_lock is succesful in locking all the mutex as required
			if(X!=0 && Y!=0){
				--useCount;
				XplusY += X+Y;
				X=0;
				Y=0;
				cout<<"X plus Y: " << XplusY << "\n";
			}	
			m1.unlock();
			m2.unlock();
			if(useCount == 0) break;
		}
	}
}

int main(){
	thread t1(incrementXY, ref(X), ref(m1), "X");
	thread t2(incrementXY, ref(Y), ref(m2), "Y");
	thread t3(consumeXY);

	t1.join();
	t2.join();
	t3.join();

	return 0;
}
