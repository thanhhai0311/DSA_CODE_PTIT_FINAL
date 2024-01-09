#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<pair<int, int>> Ke[1005];
typedef pair<int , int> ii;

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		Ke[x].push_back({y, w});
	}
}

void dijkstra(int s){
	int dist[1005];
	for(int i=1; i<=n; i++){
		dist[i]=1e9;
	}
	dist[s]=0;
	priority_queue<ii, vector<ii>, greater<ii>> Q;
	Q.push({0, s});
	while(!Q.empty()){
		ii top=Q.top();
		Q.pop();
		int d=top.first, u=top.second;
		if(d>dist[u]) continue;
		else{
			for(auto x : Ke[u]){
				int w=x.second, v=x.first;
				if(dist[v]>dist[u]+w){
					dist[v]=dist[u]+w;
					Q.push({dist[v], v});
				}
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout << dist[i] << " ";
	}
}

int main(){
	nhap();
	dijkstra(1);
}


