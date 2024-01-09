#include<bits/stdc++.h>

using namespace std;
using ll=long long;

char Find(ll n, ll k){
	if(n==1) return 'A';
	ll tmp=pow(2, n-1);
	if(k==tmp) return 'A'+n-1;
	if(k<tmp) return Find(n-1, k);
	if(k>tmp) return Find(n-1, k-tmp);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << Find(n, k) << endl;
	}	
}
