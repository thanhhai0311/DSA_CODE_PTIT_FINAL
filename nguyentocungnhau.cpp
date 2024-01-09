#include<bits/stdc++.h>

using namespace std;

int dem(int n){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(__gcd(i, n)==1) dem++;
	}
	return dem;
}

int ktra(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long n;
		cin >> n;
		if(ktra(dem(n))==1) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
