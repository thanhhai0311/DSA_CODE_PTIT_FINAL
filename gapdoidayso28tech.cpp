#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int Find(int n, ll k){
	if(k%2==1) return 1;
	ll tmp=pow(2, n-1);
	if(k==tmp) return n;
	else if(k<=tmp) return Find(n-1, k);
	else return Find(n-1, k-tmp);
}

int main(){
	ll n, k;
	cin >> n >> k;
	cout << Find(n, k) << endl;	
}
