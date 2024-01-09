#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		set<int> se;
		for(int i=1; i<n; i++){
			int x;
			cin >> x;
			se.insert(x);
		}
		for(int j=1; ; j++){
			if(se.count(j)==0){
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}
