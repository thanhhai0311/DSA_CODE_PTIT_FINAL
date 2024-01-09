#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		multiset<int> v;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.insert(x);
		}
		if(v.count(k)!=0) cout << v.count(k) << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
