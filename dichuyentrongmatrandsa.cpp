#include<bits/stdc++.h>

using namespace std;

int n, m, a[100][100], dem;
bool check;

void nhap(){
	cin >> n >> m;
	check=false;
	dem=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if(i==n-1 && j==m-1){
		check=true;
		dem++;

	}
	else{
		if(i+1<n){
			s+='D';
			//a[i+1][j]=0;
			Try(i+1, j, s);
			//a[i+1][j]=1;
			s.pop_back();
		}
		if(j+1<m){
			s+='R';
			//a[i][j+1]=0;
			Try(i, j+1, s);
			//a[i][j+1]=1;
			s.pop_back();
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(0, 0, "");
		cout << dem << endl;
	}
}
