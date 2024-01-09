#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	long long a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	long long F[n+1]={0};
	for(int i=1; i<=n; i++){
		if(i==1){
			F[i]=a[i];
		}
		else{
			F[i]=F[i-1]+a[i];
		}
	}
//	for(int i=1; i<=n; i++){
//		cout << F[i] << " ";
//	}
	while(t--){
		int l, r;
		cin >> l >> r;
		l++; r++;
		cout << F[r]-F[l-1]<< endl;
	}
	return 0;
}
