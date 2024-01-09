#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int const mod=1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll dp[n+1]={0};
		dp[0]=dp[1]=1;
		for(int i=2; i<=n; i++){
			for(int j=1; j<=min(i, 3); j++){
				dp[i]+=dp[i-j];
			}
		}
		cout << dp[n] << endl;
	}
}
