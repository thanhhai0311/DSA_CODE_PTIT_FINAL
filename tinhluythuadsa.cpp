#include<bits/stdc++.h>

using namespace std;

int const mod=1e9+7;

int lt(long long n, long long k){
	if(k==0) return 1;
	long long tmp=lt(n, k/2)%mod;
	if(k%2==0){
		return tmp%mod * tmp%mod;
	}
	return tmp%mod * tmp%mod * n%mod;
}

int main(){
	long long n, k;
	while(cin >> n >> k){
		if(n==0 && k==0) break;
		cout << lt(n, k) << endl;
	}
}
