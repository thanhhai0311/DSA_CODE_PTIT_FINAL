#include<bits/stdc++.h>

using namespace std;

void nhap(int n, int m){
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
}

void in(int n, int m){
	nhap(n,m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	in(n,m);
	return 0;
}
