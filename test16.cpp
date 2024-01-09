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
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			Ke[x].push_back(y);
			Ke[y].push_back(x);// neu là DTCH thi khong can lenh nay
		}
		memset(visited, false, sizeof(visited));
		int dem=0;
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				dem++;
				BFS(i);
			}
		}
		cout << dem << endl;
		for(int i=1; i<=n; i++){
			Ke[i].clear();
		}
	}
}
