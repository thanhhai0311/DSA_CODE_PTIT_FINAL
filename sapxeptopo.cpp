#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> Ke[1005];
bool visited[1005];
stack<int> st;

void nhap(){
	cin >> n >> m;
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
			DFS(x);
		}
	}
	st.push(u);
}

int main(){
	nhap();
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			DFS(i);
		}
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
		
	}
}
