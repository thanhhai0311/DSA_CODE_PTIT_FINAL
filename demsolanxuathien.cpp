#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, X;
		cin >> n >> X;
		map<int, int> mp;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		if(mp[X]==0) cout << "-1" << endl;
		else cout << mp[X] << endl;
	}
}
