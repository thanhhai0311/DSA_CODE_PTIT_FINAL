#include<bits/stdc++.h>

using namespace std;

int n, m;
struct edge{
	int x, y, w;
};

vector<edge> E;

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		edge e{x, y, w};
		E.push_back(e);
	}
}

void Bellman_Ford(int s){
	vector<int> d(n+1, 1e9);
	d[s]=0;
	for(int i=0; i<n-1; i++){
		for(auto tmp : E){
			if(d[tmp.x]<1e9){
				d[tmp.y]=min(d[tmp.y], d[tmp.x]+tmp.w);
			}
		}
	}
	bool ok=false;
	for(auto tmp : E){
		if(d[tmp.x]<1e9){
			if(d[tmp.y]>d[tmp.x]+tmp.w);
			ok=true;
		}
	}
	if(ok) cout << "CHU TRINH AM" << endl;
	else{
		for(int i=1; i<=n; i++){
			cout << d[i] << " ";
		}
	}
}

int main(){
	nhap();
	Bellman_Ford(1);
}
