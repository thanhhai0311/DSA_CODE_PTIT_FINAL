#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];
vector<pair<int, int>> edge;

void DFS(int u, int x, int y){
	visited[u]=true;
	for(auto v : Ke[u]){
		if((v==x && u==y) || (v==y && u==x)) continue;
		else{
			if(!visited[v]){
				DFS(v, x, y);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			edge.push_back({x, y});
			Ke[x].push_back(y);
			Ke[y].push_back(x);
		}
		int tplt=0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				tplt++;
				DFS(i, -1, -1);
			}
		}
		for(auto it : edge){
			int dem=0;
			memset(visited, false, sizeof(visited));
			for(int i=1; i<=n; i++){
				if(!visited[i]){
					dem++;
					DFS(i, it.first, it.second);
				}
			}
			if(dem>tplt) cout << it.first << " " << it.second << " ";
		}
		cout << endl;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
		edge.clear();
	}
}
