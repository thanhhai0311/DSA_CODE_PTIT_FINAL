#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];

void DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
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
		int tplt=0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				tplt++;
				DFS(i);
			}
		}
		for(int i=1; i<=n; i++){
			memset(visited, false, sizeof(visited));
			int dem=0;
			visited[i]=true;
			for(int j=1; j<=n; j++){
				if(j!=i){
					if(!visited[j]){
						dem++;
						DFS(j);
					}
				}
			}
			if(dem>tplt) cout << i << " ";
		}
		cout << endl;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
