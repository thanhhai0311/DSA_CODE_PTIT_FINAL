#include<bits/stdc++.h>

using namespace std;

int const mod=1e9+7;

int lt(int n, int k){
	if(k==0) return 1;
	long long tmp=lt(n, k/2)%mod;
	if(k%2==0){
		return tmp%mod * tmp%mod;
	}
	return tmp%mod * tmp%mod * n%mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << lt(n, k) << endl;
	}
}
