#include<bits/stdc++.h>

using namespace std;

int n, a[100][100];
bool check;

void nhap(){
	cin >> n;
	check=false;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if(i==n-1 && j==n-1){
		check=true;
		cout << s << " ";
	}
	else{
		if(i+1<n && a[i+1][j]==1){
			s+='D';
			a[i+1][j]=0;
			Try(i+1, j, s);
			a[i+1][j]=1;
			s.pop_back();
		}
		if(j+1<n && a[i][j+1]==1){
			s+='R';
			a[i][j+1]=0;
			Try(i, j+1, s);
			a[i][j+1]=1;
			s.pop_back();
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		if(a[0][0] && a[n-1][n-1]){
			Try(0, 0, "");
			if(check==false) cout << "-1";
			cout << endl;
		}
		else cout << "-1" << endl;
	}
}
