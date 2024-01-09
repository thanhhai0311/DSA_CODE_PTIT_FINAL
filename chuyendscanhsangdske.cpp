#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> Ke[n+1];
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			Ke[x].push_back(y);
			//Ke[y].push_back(x);
		}
		for(int i=1; i<=n; i++){
			sort(Ke[i].begin(), Ke[i].end());
			cout << i << ": ";
			for(auto x : Ke[i]){
				cout << x << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
