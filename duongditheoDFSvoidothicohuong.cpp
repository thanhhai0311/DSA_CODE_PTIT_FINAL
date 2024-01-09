#include<bits/stdc++.h>

using namespace std;
int n, m, s, t;
vector<int> Ke[1005];
bool visited[1005];
int p[1005];

void nhap(){
	cin >> n >> m >> s >> t;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
}

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
		int n, m, s, t;
		cin >> n >> m >> s >> t;
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			Ke[x].push_back(y);
		}
		memset(visited, false, sizeof(visited));
		DFS(s);
		if(visited[t]==false) cout << "-1" << endl;
		else{
			vector<int> v;
			while(t!=s){
				v.push_back(t);
				t=p[t];
			}
			v.push_back(s);
			reverse(v.begin(), v.end());
			for(auto x : v){
				cout << x << " ";
			}
			cout << endl;
		}
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
