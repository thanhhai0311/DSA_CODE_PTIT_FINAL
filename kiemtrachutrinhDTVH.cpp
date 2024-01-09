#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
int p[1005];
bool visited[1005];

bool DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
			DFS(x);
			p[x]=u;
		}
		else{
			if(x!=p[u]) return true;
		}
	}
	return false;
}

int main(){
	int n, m;
	cin >> n >> m;
	memset(visited, false, sizeof(visited));
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		Ke[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			if(DFS[i]){
				cout << "1";
				return 0;
			}
		}
	}
	cout << "0";
}
