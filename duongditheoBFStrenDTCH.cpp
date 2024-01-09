#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];
int p[1005];


void BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int tmp=q.front();
		q.pop();
		visited[tmp]=true;
		for(auto x : Ke[tmp]){
			if(!visited[x]){
				p[x]=tmp;
				q.push(x);
				visited[x]=true;
			}
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
		BFS(s);
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
