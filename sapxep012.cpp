#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		vector<int> v;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
