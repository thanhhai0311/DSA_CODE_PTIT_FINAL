#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	ll tc;
	cin >> tc;
	while(tc--){
		string s, t;
		cin >> s >> t;
		ll F[1000][1000];
		ll n=s.size(), m=t.size();
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				if(i==0 || j==0) F[i][j]=0;
				else{
					if(s[i-1]==t[j-1]){
						F[i][j]=F[i-1][j-1]+1;
					}
					else{
						F[i][j]=max(F[i-1][j], F[i][j-1]);
					}
				}
			}
		}
		cout << F[n][m] << endl;
	}
}
