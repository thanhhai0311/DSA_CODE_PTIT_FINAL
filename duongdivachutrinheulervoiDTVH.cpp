#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> Ke[1005];
int degree[1005];

void nhap(){
	memset(degree, 0, sizeof(degree));
	cin >> n >> m;
	for(int i=0; i<m ; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
		Ke[y].push_back(x);
		degree[x]++;
		degree[y]++;
	}
}

void euler(){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(degree[i]%2!=0){
			dem++;
		}
	}
	if(dem==0) cout << "2" << endl;
	else if(dem==2) cout << "1" << endl;
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
