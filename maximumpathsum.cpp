//#include<bits/stdc++.h>
//
//using namespace std;
//using ll=long long;
//
//ll a[100][100], F[100][100], n, m;
//
//int main(){
//	cin >> n >> m;
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=m; j++){
//			cin >> a[i][j];
//		}
//	}
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=m; j++){
//			if(i==1) F[i][j]=F[i][j-1]+a[i][j];
//			else if(j==1) F[i][j]=F[i-1][j]+a[i][j];
//			else{
//				F[i][j]=max(F[i-1][j], F[i][j-1])+a[i][j];
//			}
//		}
//	}
//	cout << F[n][m] << endl;
//}

#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll a[100][100], n, m, ans=0, tmp=0;

void nhap(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
			tmp=max(tmp, a[i][j]);
		}
	}
}

void Try(int i, int j, ll sum){
	if(i==n && j==m){
		ans=max(sum+a[n][m], ans);
	}
	else{
		if(i+1<=n){
			sum+=a[i][j];
			Try(i+1, j, sum);
			sum-=a[i][j];
		}
		if(j+1<=m){
			sum+=a[i][j];
			Try(i, j+1, sum);
			sum-=a[i][j];
		}
	}
}

int main(){
	nhap();
	Try(1, 1, 0);
	cout << ans << endl;
}
