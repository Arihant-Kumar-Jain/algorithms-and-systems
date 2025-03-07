//To generate a Test Case (STRESS TESTING)

#include <bits/stdc++.h>
using namespace std;

int main(){

	//first to avoid seeding we will write the following code:
	srand(time(NULL));



	//we will be using rand()%x+1 method:
	int t = rand()%10+1;
	cout << t <<" ";
	while(t--){
		int n = rand()%20+1;
		cout << n <<endl;
		while(n--){
			int k = rand ()%1000+1;
			cout << k << " ";
		}
		cout <<endl;
	}
}

//here %x will set the range for the number randomizer and +1 is done to avoid 0 as an input.
