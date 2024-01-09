#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int dem=0;
		for(int i=0; i<n-1; i++){
			if(a[i]>a[i+1]) dem++;
		}
		cout << dem-1 << endl;
	}
}
