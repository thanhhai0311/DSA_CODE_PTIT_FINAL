#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> Ke[1005];

int main(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].push_back(y);
	}
	for(int i=1; i<=n; i++){
		sort(Ke[i].begin(), Ke[i].end());
		cout << i << " : ";
		for(auto x : Ke[i]){
			cout << x << " ";
		}
		cout << endl;
	}
}
