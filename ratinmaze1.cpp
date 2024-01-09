#include<bits/stdc++.h>

using namespace std;

int n, a[100][100];
bool check=false;

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if(i==n && j==n){
		check=true;
		cout << s << endl;
	}
	else{
		if(i+1<=n && a[i+1][j]==1){
			s+='D';
			a[i+1][j]=0;
			Try(i+1, j, s);
			a[i+1][j]=1;
			s.pop_back();
		}
		if(j+1<=n && a[i][j+1]==1){
			s+='R';
			a[i][j+1]=0;
			Try(i, j+1, s);
			a[i][j+1]=1;
			s.pop_back();
		}
	}
}

int main(){
	nhap();
	Try(1, 1, "");
	if(check==false) cout << "-1" << endl;
}
