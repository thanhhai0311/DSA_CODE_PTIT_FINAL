#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		cout << arr[n-1] << endl;
	}
	return 0;
}
