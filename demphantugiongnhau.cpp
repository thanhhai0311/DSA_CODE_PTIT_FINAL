#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			set<int> s[i];
			for(int j=0; j<n; j++){
				s[i].insert(a[i][j]);
			}
		}
	}
}
