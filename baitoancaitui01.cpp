#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, V, w[1001], v[1001], F[1001][1001];
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
}
