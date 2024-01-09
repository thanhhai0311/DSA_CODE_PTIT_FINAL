#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n, V, w[1000], v[1000], F[1000][1000];

int main(){
	cin >> n >> V;
	for(int i=1; i<=n; i++){
		cin >> w[i];
	}
	for(int i=1; i<=n; i++){
		cin >> v[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=0; j<=V; j++){
			F[i][j]=F[i-1][j];
			if(j>=w[i]){
				F[i][j]=max(F[i][j], F[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout << F[n][V] << endl;
}
