#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	//int b[n+1]={0};
	int D[n+2]={0};
	while(q--){
		int l, r;
		cin >> l >> r;
		l++; r++;
		D[l]+=1;
		D[r+1]-=1;
	}
	for(int i=1; i<=n; i++){
		D[i]=D[i-1]+D[i];
	}
	sort(D+1, D+n+1, greater<int>());
	sort(a+1, a+n+1, greater<int>());
	long long ans=0;
	for(int i=1; i<=n; i++){
		ans+=a[i]*D[i];
	}
	cout << ans << endl;
//		for(int i=l; i<=r; i++){
//			b[i]+=1;
//		}
//	}
//	sort(b, b+n+1, greater<int>());
//	sort(a, a+n+1, greater<int>());
//	long long ans=0;
//	for(int i=0; i<=n; i++){
//		ans+=a[i]*b[i];
//	}
//	cout << ans << endl;
}
