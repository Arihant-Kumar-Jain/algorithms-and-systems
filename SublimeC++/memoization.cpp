#include <iostream>
#include <vector>
using namespace std;

int memoization(vector<int> &vec, int n){
	if(n<=1) return vec[n] = n;
	if(vec[n] != -1) return vec[n];

	return vec[n] = memoization(vec, n-1)  + memoization(vec, n-2);
}

int tabulation(int n){
	int prev1 = 0;
	int prev2 = 1;
	int sum;
	for(int i = 2; i<=n; i++){
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
	}
	return prev2;
}

int main(){
	int n = 15;
	vector<int> vec(n+1, -1);
	memoization(vec, n);

	for(auto it : vec){
		cout << it << "\n";
	}

	cout << tabulation(6);

	return 0;

}