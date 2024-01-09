//1 2 3 8 10 30 33 34 80
//8 4 3 1 2  5  7  0  5
//8 4 3 1 1  1  1  0  0

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			v.push_back({a[i], i});
		}
		sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2)->bool{
			return p1.first<p2.first;
		});
		int b[n];
		for(int i=0; i<n; i++){
			b[i]=v[i].second;
		}
		int c[n];
		c[0]=b[0];
		for(int i=1; i<n; i++){
			c[i]=min(b[i], c[i-1]);
		}
		int res=0;
		for(int i=0; i<n; i++){
			res=max(res, b[i]-c[i]);
		}
		if(res!=0) cout << res << endl;
		else cout << "-1" << endl;
	}
}
