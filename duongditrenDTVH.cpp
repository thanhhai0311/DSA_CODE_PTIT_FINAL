#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
vector<int> Ke[1005];
int p[1005];

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
	int n, m, bd, kt;
	cin >> n >> m >> bd >> kt;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
//		Ke[y].push_back(x);
	}
	DFS(bd);
	if(visited[kt]==false){
		cout << "-1";
	}
	else{
		vector<int> v;
		while(kt!=bd){
			v.push_back(kt);
			kt=p[kt];
		}
		v.push_back(bd);
		reverse(v.begin(), v.end());
		for(auto x : v){
			cout << x << " ";
		}
	}
}
