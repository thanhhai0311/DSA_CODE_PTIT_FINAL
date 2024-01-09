#include<bits/stdc++.h>

using namespace std;

int n, a[100][100], b[100], cmin=INT_MAX;
bool visited[100];
int res=INT_MAX;

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]!=0) cmin=min(cmin, a[i][j]);
		}
	}
}

void Try(int i, int cost){
	for(int j=2; j<=n; j++){
		if(visited[j]==0){
			visited[j]=1;
			b[i]=j;
			cost+=a[b[i-1]][b[i]];
			if(i==n){
				cost+=a[1][b[i]];
				res=min(res, cost);
			}
			else if(cost+(n-i+1)*cmin<res) Try(i+1, cost);
			visited[j]=0;
			cost-=a[b[i-1]][b[i]];
		}
	}
}

int main(){
	nhap();
	b[1]=1;
	Try(2, 0);
	cout << res << endl;
}
