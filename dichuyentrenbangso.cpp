#include<bits/stdc++.h>

using namespace std;

int n, m;
typedef pair<long long, pair<long long, long long>> iii;
int a[1005][1005];
int dx[4]={-1, 0, 0, 1};
int dy[4]={0, -1, 1, 0};

void nhap(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
}

void dijkstra(int x, int y){
	int dist[1005][1005];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			dist[i][j]=1e9;
		}
	}
	dist[x][y]=a[x][y];
	priority_queue<iii, vector<iii>, greater<iii>> Q;
	Q.push({0, {x, y}});
	while(!Q.empty()){
		iii top=Q.top();
		Q.pop();
		int d=top.first, x1=top.second.first, y1=top.second.second;
		if(d>dist[x1][y1]) continue;
		else{
			for(int i=0; i<4; i++){
				int x2=x1+dx[i];
				int y2=y1+dy[i];
				if(x2>=1 && x2<=n && y2>=1 && y2<=m && dist[x2][y2]>dist[x1][y1]+a[x2][y2]){
					dist[x2][y2]=dist[x1][y1]+a[x2][y2];
					Q.push({dist[x2][y2], {x2, y2}});
				}
			}
		}
	}
	cout << dist[n][m] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		dijkstra(1, 1);
	}
}
