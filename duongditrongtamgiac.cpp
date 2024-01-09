#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll F[100][100], a[100][100], n;

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i==1 && j==1) F[i][j]=a[i][j];
			else F[i][j]=max(F[i-1][j-1], F[i-1][j])+a[i][j];
		}
	}
	ll ans=0;
	for(int i=1; i<=n; i++){
		ans=max(ans, F[n][i]);
	}
	cout << ans << endl;
}
