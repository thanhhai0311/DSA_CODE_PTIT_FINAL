#include<bits/stdc++.h>

using namespace std;
int n, m;
int p[1005], size[1005];

struct Edge{
	int x, y, w;
};
vector<Edge> E;

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		Edge e{x, y, w};
		E.push_back(e);
	}
	for(int i=1; i<=n; i++){
		p[i]=i;
		size[i]=1;
	}
}

int Find(int u){
	if(u==p[u]){
		return u;
	}
	else{
		p[u]=Find(p[u]);
		return p[u];
	}
}

bool Union(int u, int v){
	u=Find(u);
	v=Find(v);
	if(u==v) return false;
	else{
		if(size[u]<size[v]){
			size[v]+=size[u];
			p[u]=v;
		}
		else{
			size[u]+=size[v];
			p[v]=u;
		}
		return true;
	}
}

void Kruskal(){
	vector<Edge> MST;
	int d=0;
	sort(E.begin(), E.end(), [](Edge a, Edge b)->bool{
		return a.w<b.w;
	});
	for(auto tmp : E){
		if(MST.size()==n-1) break;
		else{
			if(Union(tmp.x, tmp.y)){
				MST.push_back(tmp);
				d+=tmp.w;
			}
		}
	}
	if(MST.size()<n-1) cout << "DO THI KHONG LIEN THONG" << endl;
	else{
		cout << d << endl;
		for(auto tmp : MST){
			cout << tmp.x << " " <<  tmp.y << " " << tmp.w << endl;
 		}
	}
}

int main(){
	nhap();
	Kruskal();
}
