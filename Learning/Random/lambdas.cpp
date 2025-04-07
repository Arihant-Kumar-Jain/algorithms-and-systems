#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;

void func(int n){
	cout << n << ",";
}

struct print_functor{
	int lastResult{-1};
	void operator()(int n){
		lastResult = n;
		cout << n << ",";
	}
};

int main(){
	//[captures](params){body}  -- lambda function (unnamed function object)
	
	vector<int> v{1,2,3,4,5};
	
	int lastResult = -1;
	auto print_v = [&lastResult](int n){lastResult = n; cout<<n<<",";};

	for_each(begin(v), end(v), /*[](int n){cout << n << ",";}*/ /*func*/ print_v /*print_functor()*/);

	cout<<endl;
	cout << lastResult << endl;

	return 0;	
}
