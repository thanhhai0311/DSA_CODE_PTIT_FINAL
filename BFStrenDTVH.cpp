#include<bits/stdc++.h>

using namespace std;

vector<int> Ke[1005];
bool visited[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int tmp=q.front();
		q.pop();
		cout << tmp << " ";
		visited[tmp]=true;
		for(auto x : Ke[tmp]){
			if(visited[x]==false){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

int main(){
	int n, m, k;
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
//	memset(visited, false, sizeof(visited));
	BFS(k);
}

