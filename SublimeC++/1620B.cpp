#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

	int tt; cin>>tt;

	while(tt--){
		long long w,h; cin>>w>>h;



		//to store x1:-
		int n1; cin>>n1;
		long long arr1[n1];

		for(int i = 0; i<n1; i++){
			cin>>arr1[i];
		}

		long long diff_x1 = (long long)(arr1[n1-1] - arr1[0])*h;



		//to store X2:-
		int n2; cin>>n2;
		long long arr2[n2];

		for(int i = 0; i<n2; i++){
			cin>>arr2[i];
		}

		long long diff_x2 = (long long)(arr2[n2-1] - arr2[0])*h;

		long long xMax = max(diff_x1, diff_x2);

		//to store Y1:-
		int n3; cin>>n3;
		long long arr3[n3];

		for(int i = 0; i<n3; i++){
			cin>>arr3[i];
		}

		long long diff_y1 = (long long)(arr3[n3-1] - arr3[0])*w;


		//to store Y2:-
		int n4; cin>>n4;
		long long arr4[n4];

		for(int i = 0; i<n4; i++){
			cin>>arr4[i];
		}

		long long diff_y2 = (long long)(arr4[n4-1] - arr4[0])*w;

		long long yMax = max(diff_y1, diff_y2);

		cout << (long long)max(xMax, yMax) << "\n";




	}
}