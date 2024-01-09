#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[50000];
bool visited[50000];

void DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(visited[x]==false){
			DFS(x);
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		Ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	for(int i=1; i<=n; i++){
		int dem=0;
		visited[i]=true;
		for(int j=1; j<=n; j++){
			if(visited[j]==false){
				dem++;
				DFS(j);
			}
		}
		cout << dem << endl;
		memset(visited, false, sizeof(visited));
	}
}
