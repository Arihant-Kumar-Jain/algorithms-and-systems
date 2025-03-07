//BY ITMO EDU -- (CODEFORCES EDU)

#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n, int toFind){
	int l = 0;
	int r = n-1;
	bool check = false;
	int m;

	while(r>=l){
		m = (r+l)/2;
		if(arr[m] == toFind){
			check = true;
			break;
		}
		else if(arr[m] > toFind){
			r = m-1;
		}else if(arr[m] < toFind){
			l = m+1;
		}
	}

	if(check == false){
		cout << "NOT FOUND";
		return;
	}else{
		cout << m+1;
		return;
	}
}

void FindClosestInArray(int arr[], int n, int toFind){
	int l = 0; 
	int r = n-1;

}

int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int n ; cin>>n;
	int arr[n];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	int toFind = 6;

	// BinarySearch(arr, n, toFind);
	FindClosestInArray(arr, n, toFind);

}