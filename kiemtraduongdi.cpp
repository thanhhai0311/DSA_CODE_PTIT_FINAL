#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];
int p[1005];

void DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
			p[x]=u;
			DFS(x);
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
			Ke[x].push_back(y);
			Ke[y].push_back(x);
		}
		int q;
		cin >> q;
		while(q--){
			int x, y;
			cin >> x >> y;
			DFS(x);
			if(visited[y]==true) cout << "YES" << endl;
			else cout << "NO" << endl;
			memset(visited, false, sizeof(visited));
		}
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
