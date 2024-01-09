#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, x;
		cin >> n >> x;
		multiset<int> mse;
		for(int i=0; i<n; i++){
			int m; 
			cin >> m; 
			mse.insert(m);
		}
		if(mse.count(x)==0) cout << "-1" << endl;
		else cout << "1" << endl;
	}
	return 0;
}
