#include<bits/stdc++.h>

using namespace std;

int const mod=1e9+7;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long long ans=0;
	for(int i=1; i<n; i++){
		ans+=a[i]*i;
		ans%=mod;
	}
	cout << ans;
}
