#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	double n,k; cin>>n>>k;

	double sum = 0;
	double num = 0;

	for(double i = 0; i<n; i++){
		double temp; cin>>temp;

		num = min(min(k, n-k+1), min(i+1, n-i)) * temp;
		sum += num/(n-k+1);
	}

	cout << fixed << setprecision(6) << sum;


}