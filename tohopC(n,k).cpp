#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int const mod=1e9+7;
ll F[1005][1005];

void tohop(ll n, ll k){
	for(int i=0; i<=n; i++){
		for(int j=0; j<=k; j++){
			if(j==0 || i==j) F[i][j]=1;
			else{
				F[i][j]=F[i-1][j]+F[i-1][j-1];
				F[i][j]%=mod;
			}
		}
	}
}

int main(){
	tohop(1000, 1000);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << F[n][k] << endl;
	}
}
