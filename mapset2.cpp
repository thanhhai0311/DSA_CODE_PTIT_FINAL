#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	set<int> s1;
	set<int> s2;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		s1.insert(x);
	}
	for(int j=0; j<m; j++){
		int y;
		cin >> y;
		s2.insert(y);
	}
	int dem=0;
	cout << s1.size() << endl;
	for(auto k : s1){
		if(s2.count(k)==0) dem++;
	}
	cout << dem;
	return 0;
}
