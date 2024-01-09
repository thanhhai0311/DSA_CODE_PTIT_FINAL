#include<bits/stdc++.h>

using namespace std;
vector<int> Ke[1005];
bool visited[1005];
int p[1005];

//bool DFS(int u){
//	visited[u]=true;
//	for(auto x : Ke[u]){
//		if(!visited[x]){
//			p[x]=u;
//			DFS(x);
//		}
//		else{
//			if(p[u]!=x) return true;
//		}
//	}
//	return false;
//}

bool BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int tmp=q.front();
		q.pop();
		visited[tmp]=true;
		for(auto x : Ke[tmp]){
			if(visited[x]==false){
				p[x]=tmp;
				q.push(x);
				visited[x]=true;
			}
			else if(p[tmp]!=x) return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1; i<n; i++){
			int x, y;
			cin >> x >> y;
			Ke[x].push_back(y);
			Ke[y].push_back(x);
		}
		int ok=0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				if(BFS(i)){
					cout << "NO" << endl;
					ok=1;
					break;
				}
			}
			memset(visited, false, sizeof(visited));
		}
		if(ok==0) cout << "YES" << endl;
		memset(visited, false, sizeof(visited));
		memset(p, 0, sizeof(p));
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
