#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int n, int k){
	int l=0;
	int r=n-1;
	int m=(l+r)/2;
	while(l<=r){
		if(a[m]>k){
			r=m-1;
			m=(l+r)/2;
		}
		else if(a[m]<k){
			l=m+1;
			m=(l+r)/2;
		}
		else return m;
	}
	return -1;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << binary_search(a, n, k) << endl;
}
