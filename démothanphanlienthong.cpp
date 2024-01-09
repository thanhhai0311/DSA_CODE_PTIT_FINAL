#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
vector<int> Ke[1005];

void DFS(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
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
	int tplt=0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			DFS(i);
			tplt++;
		}
	}
	cout << tplt << endl;
}
