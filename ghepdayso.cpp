#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		multiset<int> mse;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				mse.insert(a[i][j]);
			}
		}
		for(auto x : mse){
			cout << x << " ";
		}
		cout << endl;
	}
}
