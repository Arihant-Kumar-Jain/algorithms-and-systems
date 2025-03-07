#include <iostream>
using namespace std;

struct Hero
{	
public:
	int health;
private:
	char level;
public:
	void setlevel(char c){
		level = c;
	}

	char getlevel(){
		return level;
	}
};

int main(){
	Hero h1;
	h1.health = 90;
	
	h1.setlevel('M');

	// cout << sizeof(h1) << "\n";
	cout << h1.health << "\n";
	cout << h1.getlevel() << "\n";


}
