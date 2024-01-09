#include<bits/stdc++.h>

using namespace std;

int const maxn=200005;
int a[maxn], n;
int t[4*maxn];

void build(int v, int l, int r){
	if(l==r){
		t[v]=a[l];
	}
	else{
		int m=(l+r)/2;
		build(2*v, l, m);
		build(2*v+1, m+1, r);
		t[v]=t[2*v]+t[2*v+1];
	}	
}

int sum(int v, int tl, int tr, int l, int r){
	if(l>r) return 0;
	if(l==tl && r==tr) return t[v];
	else{
		int tm=(tl+tr)/2;
		return sum(2*v, tl, tm, l, min(r, tm))+sum(2*v+1, tm+1, tr, max(l, tm+1), r);
	}
}

void update(int v, int l, int r, int pos, int val){
	if(l==r) t[v]=val;
	else{
		int m=(l+r)/2;
		if(pos<=m){
			update(2*v, l, m, pos, val);
		}
		else{
			update(2*v+1, m+1, r, pos, val);
		}
		t[v]=t[2*v]+t[2*v+1];
	}	
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	build(1, 0, n-1);
//	for(int i=1; i<=4*n; i++){
//		cout << t[i] << " ";
//	}
	cout << sum(1, 0, n-1, 1, 5) << endl;
}
