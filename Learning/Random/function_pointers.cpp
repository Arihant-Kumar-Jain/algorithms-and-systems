#include <iostream>
using namespace std;

int add(int x, int y){
	return x+y;
}

int multiply(int x, int y){
	return x*y;
}

int main(){
//	int (*op) (int, int);
//	this works well but, we can also use inbuilt function
	function<int(int,int)> op;
	cout<<"enter 1 for addition and 2 for multiplication: ";
	int n; cin>>n;
	if(n == 1){
		op = add;
	}else if(n == 2){
		op = multiply;
	}else{
		cout << "please try again.";
	}
//	cout << "operation: " << add(2,3) <<"\n";
	cout << "operation: " << op(2,3) << "\n";
}
