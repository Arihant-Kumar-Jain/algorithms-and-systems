#include <iostream>
using namespace std;

int comparisions = 0, swaps = 0;

void merge(int arr[], int left, int mid, int right){
	int n1 = mid-left+1;
	int n2 = right-mid;

	int arrL[n1], arrR[n2];

	for(int i = 0; i<n1; i++) arrL[i] = arr[left+i];
	for(int i = 0; i<n2; i++) arrR[i] = arr[mid+i+1];

	int i=0, j = 0, k = left;
	
	while(i<n1 && j<n2){
		comparisions++;
		if(arrL[i]<=arrR[j]){
			arr[k++] = arrL[i++];
		}else{
			arr[k++] = arrR[j++];
			swaps = mid-left+1-i;
		}
	}

	while(i<n1) arr[k++] = arrL[i++];
	while(j<n2) arr[k++] = arrR[j++];

	
}

void mergeSort(int arr[], int left, int right){
	if(left < right){
		int mid = left + (right-left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main(){
	int arr[] = {2, 1, 6, 4, 7, 3, 5};
	int n = sizeof(arr)/sizeof(arr[0]);

	int left = 0, right = n-1;

	mergeSort(arr, left, right);

	for(auto it : arr){
		cout << it << " ";
	}
}