#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	vector<int> vt(n);
	iota(vt.begin(), vt.end(), 0);
	vector<vector<int>> v;
	do{
		int sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i][vt[i]];
		}
		if(sum==k) v.push_back(vt);
	}
	while(next_permutation(vt.begin(), vt.end()));
	cout << v.size() << endl;
	for(auto x : v){
		for(int i=0; i<x.size(); i++){
			cout << x[i]+1 << " ";
		}
		cout << endl;
	}
}
