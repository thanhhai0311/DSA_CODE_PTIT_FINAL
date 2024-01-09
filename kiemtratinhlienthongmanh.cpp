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
		}
		int ok=1;
		for(int i=1; i<n; i++){
			DFS(i);
			for(int i=1; i<=n; i++){
				if(!visited[i]){
					ok=0;
					break;
				}
			}
			if(ok==0) break;
			else{
				memset(visited, false, sizeof(visited));
			}
		}
		if(ok==1) cout << "YES" << endl;
		else cout << "NO" <<endl;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
