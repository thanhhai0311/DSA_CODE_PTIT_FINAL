#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	
	long long dem=0;
	sort(a, a+n);
	for(int i=0; i<n; i++){
			auto it=upper_bound(a+i+1, a+n, k-a[i]);
			dem+=distance(it, a+n);
	}
	cout << dem;
}
