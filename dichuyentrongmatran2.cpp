#include<bits/stdc++.h>

using namespace std;

int a[100][100], n;
bool vs[100][100];
bool check;

void khoitao(){
	cin >> n;
	check=false;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	memset(vs, false, sizeof(vs));
}

void Try(int i, int j, string s){
	if(i==n-1 && j==n-1){
		check=true;
		cout << s << " ";
	}
	else{
		if(i+1<n && a[i+1][j]==1 && !vs[i+1][j]){
			s+='D';
			a[i+1][j]=0;
			vs[i][j]=true;
			Try(i+1, j, s);
			vs[i][j]=false;
			a[i+1][j]=1;
			s.pop_back();
		}
		if(j-1>=0 && a[i][j-1]==1 && !vs[i][j-1]){
			s+='L';
			a[i][j-1]=0;
			vs[i][j]=true;
			Try(i, j-1, s);
			vs[i][j]=false;
			a[i][j-1]=1;
			s.pop_back();
		}
		if(j+1<n && a[i][j+1]==1 && !vs[i][j+1]){
			s+='R';
			a[i][j+1]=0;
			vs[i][j]=true;
			Try(i, j+1, s);
			vs[i][j]=false;
			a[i][j+1]=1;
			s.pop_back();
		}
		if(i-1>=0 && a[i-1][j]==1 && !vs[i-1][j]){
			s+='U';
			a[i-1][j]=0;
			vs[i][j]=true;
			Try(i-1, j, s);
			vs[i][j]=false;
			a[i-1][j]=1;
			s.pop_back();
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		khoitao();
		if(a[0][0] && a[n-1][n-1]){
			Try(0, 0, "");
			if(check==false) cout << "-1";
	 		cout << endl;
	 	}
	 	else cout << "-1" << endl;
	}
}
