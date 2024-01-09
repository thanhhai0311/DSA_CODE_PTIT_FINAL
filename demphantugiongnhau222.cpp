#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, dem=0;
		cin >> n;
		vector<int> v;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			set<int> s;
			for(int j=0; j<n; j++){
				s.insert(a[i][j]);
			}
			for(int x : s) v.push_back(x);
		}
		int l=v.size();
		sort(v.begin(), v.end());
		for(int i=0; i<l; i++){
			int kt=1;
			while(v[i]==v[i+1] && i<l){
				kt++;
				i++;
			}
			if(kt==n) dem++;
		}
		cout << dem << endl;
	}
}
