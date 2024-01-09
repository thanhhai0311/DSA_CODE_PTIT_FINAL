//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, m, s;
//vector<pair<int, int>> Ke[1005];
//typedef pair<int, int> ii;
//
//void nhap(){
//	cin >> n >> m >> s;
//	for(int i=0; i<m; i++){
//		int x, y, w;
//		cin >> x >> y >> w;
//		Ke[x].push_back({y, w});
//		Ke[y].push_back({x, w});
//	}
//}
//
//void dijkstra(int s){
//	int dist[1005];
//	for(int i=1; i<=n; i++){
//		dist[i]=1e9;
//	}
//	dist[s]=0;
//	priority_queue<ii, vector<ii>, greater<ii>> Q;
//	Q.push({0, s});
//	while(!Q.empty()){
//		ii tmp=Q.top();
//		Q.pop();
//		int d=tmp.first, u=tmp.second;
//		if(d>dist[u]) continue;
//		else{
//			for(auto x : Ke[u]){
//				if(dist[x.first]>dist[u]+x.second){
//					dist[x.first]=dist[u]+x.second;
//					Q.push({dist[x.first], x.first});
//				}
//			}
//		}
//	}
//	for(int i=1; i<=n; i++){
//		cout << dist[i] << " ";
//	}
//}
//
//int main(){
//	nhap();
//	dijkstra(s);
//}


#include<bits/stdc++.h>

using namespace std;

int n, m, s;
struct edge{
	int x, y, w;
};
vector<edge> E;

void nhap(){
	cin >> n >> m >> s;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		edge e1{x, y, w};
		E.push_back(e1);
		edge e2{y, x, w};
		E.push_back(e2);
	}
}

void Bellman_Ford(int s){
	vector<int> d(n+1, 1e9);
	d[s]=0;
	for(int i=0; i<n-1; i++){
		for(auto tmp : E){
			if(d[tmp.x]<1e9){
				d[tmp.y]=min(d[tmp.y], d[tmp.x]+tmp.w);
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout << d[i] << " ";
	}
}

int main(){
	nhap();
	Bellman_Ford(s);
}
