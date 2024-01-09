#include<bits/stdc++.h>

using namespace std;
int const mod=123456789;

long long lt(long long n, long long k){
	if(k==0) return 1;
	else{
		long long tmp=lt(n, k/2)%mod;
		if(k%2==0) return tmp%mod * tmp%mod;
		else return tmp%mod * tmp%mod * n%mod;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << lt(2, n-1) << endl;
	}
}
