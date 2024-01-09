#include<bits/stdc++.h>

using namespace std;

int n, m;
using ii=pair<int, int>;
vector<ii> Ke[1005];
bool taken[1005];

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		Ke[x].push_back({y, w});
		Ke[y].push_back({x, w});
	}
	memset(taken, false, sizeof(taken));
}

void Prim(int s){
	priority_queue<ii, vector<ii>, greater<ii>> q;
	taken[s]=true;
	int d=0;
	for(ii x : Ke[s]){
		if(!taken[x.first]){
			q.push({x.second, x.first});
		}
	}
	while(!q.empty()){
		ii top=q.top();
		q.pop();
		int u=top.second, w=top.first;
		if(!taken[u]){
			d+=w;
			taken[u]=true;
			for(ii xx : Ke[u]){
				if(!taken[xx.first]){
					q.push({xx.second, xx.first});
				}
			}
		}
	}
	cout << d << " ";
}

int main(){
	nhap();
	Prim(1);
}
