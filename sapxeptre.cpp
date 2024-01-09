#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long long dem=0;
	int l=0, r=n-1;
	while(l<=r){
		if(a[l]+a[r]<=k){
			dem++;
			l++; r--;
		}
		else{
			dem++;
			r--;
		}
	}
	cout << dem;
}
