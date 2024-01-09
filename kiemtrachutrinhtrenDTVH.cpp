#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];
int p[1005];

bool DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
			p[x]=u;
			DFS(x);
		}
		else{
			if(p[u]!=x) return true;
		}
	}
	return false;
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
		int ok=0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				if(DFS(i)){
					cout << "YES" << endl;
					ok=1;
					break;
				}
			}
			memset(visited, false, sizeof(visited));
		}
		if(ok==0) cout << "NO" << endl;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
