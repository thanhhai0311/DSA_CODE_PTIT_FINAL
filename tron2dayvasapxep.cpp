#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		multiset<int> mse;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mse.insert(a[i]);
		}
		for(int j=0; j<m; j++){
			cin >> b[j];
			mse.insert(b[j]);
		}
		for(auto x : mse){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
