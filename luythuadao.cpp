#include<bits/stdc++.h>

using namespace std;
int const mod=1e9+7;

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
		string s1;
		cin >> s1;
		string s2=s1;
		reverse(s2.begin(), s2.end());
		cout << lt(stoll(s1), stoll(s2)) << endl;
	}
}
