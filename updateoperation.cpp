#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int d[n+2]={0};
	for(int i=1; i<=n; i++){
		if(i==1){
			d[i]=a[i];
		}
		else{
			d[i]=a[i]-a[i-1];
		}
	}
	while(q--){
		int l, r, k;
		cin >> l >> r >> k;
		d[l+1]+=k;
		d[r+2]-=k;
//		l++; r++;
//		d[l]+=k;
//		d[r+1]-=k;
	}
	int F[n+1]={0};
	for(int i=1; i<=n; i++){
		if(i==1){
			F[i]=d[i];
			//cout << F[i] << " ";
		}
		else{
			//cout << F[i-1]+d[i] << " ";
			F[i]=F[i-1]+d[i];
		}
		cout << F[i] << " ";
	}
	return 0;
}
