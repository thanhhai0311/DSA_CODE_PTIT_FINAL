#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc; 
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int k;
		cin >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=k; i<n; i++){
			cout << a[i] << " ";
		}
		for(int i=0; i<=k-1; i++){
			cout << a[i] << " ";
		}
		cout << endl; 
	}
	return 0;
}
	

