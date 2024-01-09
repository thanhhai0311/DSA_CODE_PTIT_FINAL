#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll a[1000], F[1000], n;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
		F[i]=1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				F[i]=max(F[i], F[j]+1);
			}
		}
	}
	ll ans=0;
	for(int i=0; i<n; i++){
		ans=max(F[i], ans);
	}
	cout << ans << endl;
}
