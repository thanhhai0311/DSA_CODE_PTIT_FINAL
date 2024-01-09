#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		v.push_back({x, 1});
		v.push_back({y, -1});
	}
	sort(v.begin(), v.end());
	int cnt=0, ans=0;
	for(auto it : v){
		cnt+=it.second;
		ans=max(ans, cnt);
	}
	cout << ans;
}
//3
//5 8
//2 4
//3 9
