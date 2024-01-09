#include<bits/stdc++.h>

using namespace std;

int nto(long long n){
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
		long long n, k;
		cin >> n >> k;
		long long sum=0;
		for(long long i=1; i<=n; i++){
			sum+=i%k;
		}
		if(nto(k)==1) cout << sum << endl;
		else cout << "-1" << endl;
	}
	return 0; 
}
