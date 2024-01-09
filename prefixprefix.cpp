#include<bits/stdc++.h>

using namespace std;

long long a[100001], l[100001], r[100001], d[100001], dem[100001];

long long D[100001], F[100001];
int main(){
	int n, m, k;
	cin >> n >> m >> k;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=m; i++){
		cin >> l[i] >> r[i] >> d[i];
	}
	for(int i=1; i<=k; i++){
		int x, y;
		cin >> x >> y;
		for(int j=x; j<=y; j++){
			dem[j]++;
		}
	}
//	for(int i=1; i<=m; i++){
//		cout << dem[i] << " ";
//	}
	for(int i=1; i<=n; i++){
		if(i==1){
			D[i]=a[i];
		}
		else{
			D[i]=a[i]-a[i-1];
		}
		//cout << D[i] << " ";
	}
	//cout << endl;
	for(int i=1; i<=m; i++){
		D[l[i]]+=d[i]*dem[i];
		D[r[i]+1]-=d[i]*dem[i];
	}
//	for(int i=1; i<=n; i++){
//		cout << D[i] << " ";
//	}
//	cout << endl;
	for(int i=1; i<=n; i++){
		if(i==1){
			a[i]=D[i];
		}
		else{
			a[i]=a[i-1]+D[i];
		}
		cout << a[i] << " ";
	}
}
