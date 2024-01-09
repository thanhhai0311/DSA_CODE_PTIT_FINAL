#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1005][1005];
bool visited[1005][1005];
int d[1005][1005];

void khoitao(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	memset(visited, false, sizeof(visited));
	memset(d, 0, sizeof(d));
}

int BFS(int i, int j){
	queue<pair<int, int>> q;
	q.push({i, j});
	d[i][j]=0;
	visited[i][j]=true;
	while(!q.empty()){
		pair<int, int> top=q.front();
		q.pop();
		int x=top.first;
		int y=top.second;
		if(x==n && y==m){
			return d[x][y];
		}
		else{
			if(x+a[x][y]<=n && !visited[x+a[x][y]][y]){
				q.push({x+a[x][y], y});
				d[x+a[x][y]][y]=d[x][y]+1;
				visited[x+a[x][y]][y]=true;
			}
			if(y+a[x][y]<=m && !visited[x][y+a[x][y]]){
				q.push({x, y+a[x][y]});
				d[x][y+a[x][y]]=d[x][y]+1;
				visited[x][y+a[x][y]]=true;
			}
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		khoitao();
		cout << BFS(1, 1) << endl;
	}
}
