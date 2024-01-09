#include<bits/stdc++.h>

using namespace std;

int n, m, a[100][100], dem=0;
long long res=0;
long long kq=INT_MAX;

void nhap(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j){
	if(i==n && j==m){
		dem++;
		//res+=a[1][1];
		kq=min(res, kq);
		res=0;
	}
	else{
		if(i+1<=n){
			res=res+a[i][j]-a[i][j+1];
			Try(i+1, j);
			//res=res-a[i][j]+a[i][j+1];
		}
		if(j+1<=m){
			res=res+a[i][j]-a[i+1][j];
			Try(i, j+1);
			//res=res-a[i][j]+a[i+1][j];
		}
		if(i+1<=n && j+1<=m){
			res=res+a[i][j]-a[i+1][j+1];
			Try(i+1, j+1);
			//res=res-a[i][j]+a[i+1][j+1];
		}
//		if(i+1<=n && j-1<=m){
//			res=res+a[i][j]-a[i+1][j+1];
//			Try(i+1, j-1);
//			res=res-a[i][j]+a[i+1][j+1];
//		}
	}
}

int main(){
	nhap();
	Try(1, 1);
	cout << kq << endl;
}

//3 3
//2 1 2
//1 2 4
//1 3 2
