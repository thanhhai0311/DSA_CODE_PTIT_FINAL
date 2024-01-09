#include<bits/stdc++.h>

using namespace std;
int n, m;
int p[100005], size[100005];
int max1=0;

struct duong{
	int x, y;
};

vector<duong> D;

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		duong d{x, y};
		D.push_back(d);
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
	if(u==v){
		return false;
	}
	else{
		if(size[u]<size[v]){
			size[v]+=size[u];
			if(max1<size[v]) max1=size[v];
			p[u]=v;
		}
		else{
			size[u]+=size[v];
			if(max1<size[u]) max1=size[u];
			p[v]=u;
		}
		n--;
		return true;
	}
}

void ans(){
	for(auto tmp : D){
		Union(tmp.x, tmp.y);
		cout << n << " " << max1 << endl;
	}
}

int main(){
	nhap();
	ans();
}
