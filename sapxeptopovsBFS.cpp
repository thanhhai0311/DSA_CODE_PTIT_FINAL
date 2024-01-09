#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> Ke[1005];
int degree[1005];

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		degree[y]++;
	}
}

void Kahn(){
	queue<int> q;
	for(int i=1; i<=n; i++){
		if(degree[i]==0) q.push(i);
	}
	vector<int> topo;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		topo.push_back(u);
		for(auto x : Ke[u]){
			degree[x]--;
			if(degree[x]==0) q.push(x);
		}
	}
	if(topo.size()<n) cout << "DO THI CO CHU TRINH" << endl;
	else{
		for(auto x : topo){
			cout << x << " ";
		}
	}
}

int main(){
	nhap();
	Kahn();
}


