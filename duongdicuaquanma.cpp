#include<bits/stdc++.h>

using namespace std;
int n, s, t, u, v;
bool visited[1005][1005];
int dx[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8]={-1, 1, -2, 2, -2, 2, -1, 1};
int a[1005][1005];
int d[1005][1005];

void nhap(){
	cin >> n;
	cin >> s >> t >> u >> v;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
}

void BFS(int u, int v){
	queue<pair<int, int>> q;
	q.push({u, v});
	while(!q.empty()){
		pair<int, int> tmp=q.front();
		q.pop();
		visited[tmp.first][tmp.second]=true;
		for(int i=0; i<8; i++){
			int i1=tmp.first+dx[i];
			int i2=tmp.second+dy[i];
			if(i1>=1 && i1<=n && i2>=1 && i2<=n && visited[i1][i2]==false && a[i1][i2]==1){
				q.push({i1, i2});
				visited[i1][i2]=true;
				d[i1][i2]=d[tmp.first][tmp.second]+1;
			}
		}
	}
}

int main(){
	nhap();
	BFS(s, t);
	if(visited[u][v]==false) cout << "-1";
	else cout << d[u][v];
}
