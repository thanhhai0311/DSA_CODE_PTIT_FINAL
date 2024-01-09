#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];

void DFS(int u){
	cout << u << " ";
	visited[u]=true;
	for(auto x : Ke[u]){
		if(visited[x]==false){
			DFS(x);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			Ke[x].push_back(y);
		}
		memset(visited, false, sizeof(visited));
		DFS(k);
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
		cout << endl;
	}
}
