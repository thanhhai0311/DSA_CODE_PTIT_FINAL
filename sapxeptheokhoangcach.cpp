#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		multimap<int, int> mp;
		int n, a;
		cin >> n >> a;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			mp.insert(abs(x-a), x);
		}
		for(auto x : mp){
			cout << x.second << " ";
		}
		cout << endl;
	}
	return 0;
}
