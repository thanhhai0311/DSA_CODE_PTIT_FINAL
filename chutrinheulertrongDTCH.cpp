#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> Ke[1005];
int bbv[1005];
int bbr[1005];

void nhap(){
	memset(bbv, 0, sizeof(bbv));
	memset(bbr, 0, sizeof(bbr));
	for(int i=1; i<=n; i++){
		Ke[i].clear();
	}
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		bbv[y]++;
		bbr[x]++;
	}
}

void euler(){
	int dem1=0, dem2=0;
	for(int i=1; i<=n; i++){
		if(abs(bbv[i]-bbr[i])==1) dem1++;
		if(abs(bbv[i]-bbr[i])!=0) dem2++;
	}
	if(dem2==0) cout << "1" << endl;
	else cout << "0" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		euler();
	}
}
