#include<bits/stdc++.h>

using namespace std;

int n;
int p[1005];
int size[1005];

void nhap(){
	cin >> n;
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
//	while(u!=p[u]){
//		u=p[u];
//	}
//	return u;
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

int main(){
	nhap();
	
}
