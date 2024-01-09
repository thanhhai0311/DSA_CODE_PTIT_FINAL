#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
vector<int> Ke[1005];
vector<pair<int, int>> edge;

void DFS(int u, int x, int y){
	visited[u]=true;
	for(auto v : Ke[u]){
		if((v==x && u==y) || (v==y && u==x)) continue;
		if(!visited[v]){
			DFS(v, x, y);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<pair<int, int>> xx;
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
		int ans=0;
		for(auto v : edge){
			int x=v.first;
			int y=v.second;
			int dem=0;
			memset(visited, false, sizeof(visited));
			for(int i=1; i<=n; i++){
				if(!visited[i]){
					dem++;
					DFS(i, x, y);
				}
			}
			if(dem>tplt){
				ans++;
				xx.push_back({v.first, v.second});
			}
		}
		cout << ans << endl;
		for(auto k : xx){
			cout << "(" << k.first << " " << k.second << ")" << " ";
		}
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
