#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int const mod=1e9+7;
ll F[100];

int main(){
	int n;
	cin >> n;
	F[1]=1; F[2]=1;
	if(n==1 || n==2) cout << "1" << endl;
	for(ll i=3; i<=n; i++){
		F[i]=F[i-1]+F[i-2];
		F[i]%=mod;
		if(i==n){
			cout << F[i] << endl;
			break;
		}
	}
}
