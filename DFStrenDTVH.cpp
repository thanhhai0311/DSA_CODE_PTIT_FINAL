#include<bits/stdc++.h>

using namespace std;
int n, m, k;
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
	cin >> n >> m >> k;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		Ke[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		sort(Ke[i].begin(), Ke[i].end());
	}
	DFS(k);
}
