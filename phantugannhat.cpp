#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k, x;
		cin >> n >> k >> x;
		set<int> s;
		vector<int> v;
		for(int i=0; i<n; i++){
			int xx;
			cin >> xx;
			s.insert(xx);
			v.push_back(xx);
		}
		int i=0;
		while(v[i]!=x){
			i++;
		}
		int l=k/2;
//		vector<int> v;
//		for(auto x : s){
//			v.push_back(x);
//		}
		for(int j=i-l; j<i; j++){
			cout << v[j] << " ";
		}
		for(int j=i+1; j<=i+l; j++){
			cout << v[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
