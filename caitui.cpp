#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, V;
		cin >> n >> V;
		ll a[n+1], c[n+1];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			cin >> c[i];
		}
		ll F[n+1][V+1]={0};
		for(int i=1; i<=n; i++){
			for(int j=0; j<=V; j++){
				F[i][j]=F[i-1][j];
				if(j>=a[i]){
					F[i][j]=max(F[i][j], F[i-1][j-a[i]]+c[i]);
				}
			}
		}
		cout << F[n][V] << endl;
	}
}
