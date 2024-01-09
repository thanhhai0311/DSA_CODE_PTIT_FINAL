#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> mp;
	int n; 
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	int kt;
	cin >> kt;
	for(int j=0; j<kt; j++){
		int a;
		cin >> a;
		if(mp[a]==0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
