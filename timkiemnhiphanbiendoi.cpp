#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >>k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	auto it=lower_bound(a, a+n, k);
	cout << it-a;
}
