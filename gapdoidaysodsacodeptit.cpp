#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll kq(ll n, ll k){
	ll tmp=pow(2, n-1);
	if(k==tmp) return n;
	else{
		if(k<=tmp) return kq(n-1, k);
		else return kq(n-1, k-tmp);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << kq(n, k) << endl;
	}	
}
