#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> Ke[1005];
vector<int> KeN[1005];
bool visited[1005];
stack<int> st;

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		KeN[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void DFS1(int u){
	visited[u]=true;
	for(auto x : Ke[u]){
		if(!visited[x]){
			DFS1(x);
		}
	}
	st.push(u);
}

void DFS2(int u){
	visited[u]=true;
	for(auto x : KeN[u]){
		if(!visited[x]){
			DFS2(x);
		}
	}
}

void Kosaraju(){
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			DFS1(i);
		}
	}
	memset(visited, false, sizeof(visited));
	int scc=0;
	while(!st.empty()){
		int u=st.top();
		st.pop();
		if(!visited[u]){
			scc++;
			DFS2(u);
		}
	}
	if(scc==1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Kosaraju();
		for(int i=1; i<=n; i++){
			Ke[i].clear();
			KeN[i].clear();
		}
	}
}
