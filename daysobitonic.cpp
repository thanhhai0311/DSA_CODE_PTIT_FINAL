#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n, a[1000], F1[1000], F2[1000];

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
		F1[i]=a[i];
		F2[i]=a[i];
	}	
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j]){
				F1[i]=max(F1[i], F1[j]+a[i]);
			}
		}
	}
	for(int i=n-1; i>=0; i--){
		for(int j=n-1; j>i; j--){
			if(a[i]>a[j]){
				F2[i]=max(F2[i], F2[j]+a[i]);
			}
		}
	}
	ll ans=0;
	for(int i=0; i<n; i++){
		ans=max(ans, F1[i]+F2[i]-a[i]);
	}
	cout << ans << endl;
}
