#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int D[n+2]={0};
	for(int i=1; i<=n; i++){
		if(i==1){
			D[i]=a[i];
		}
		else{
			D[i]=a[i]-a[i-1];
		}
	}
	while(q--){
		int l, r, k;
		cin >> l >> r >> k;
		l++; r++;
		D[l]+=k;
		D[r+1]-=k;
	}
	for(int i=1; i<=n; i++){
		if(i==1){
			a[i]=D[i];
		}
		else{
			a[i]=a[i-1]+D[i];
		}
		cout << a[i] << " ";
	}
	return 0;
}
