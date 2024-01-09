#include<bits/stdc++.h>

using namespace std;

using ll=long long;

ll F[100];

char Find(int n, ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]){
		return Find(n-2, k);
	}
	else return Find(n-1, k-F[n-2]);
}

int main(){
	ll n, k;
	cin >> n >>k;
	F[1]=1; F[2]=1;
	for(int i=3; i<=92; i++){
		F[i]=F[i-1]+F[i-2];
	}	
	cout << Find(n, k) << endl;
}
