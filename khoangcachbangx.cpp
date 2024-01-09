#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k;
		cin >> n >> k;
		multiset<int> se;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			se.insert(x);
		}
		int kq=-1;
		for(auto x : se){
			if(se.count(k+x)==1){
				kq=1;
				break;
			}
		}
		if(kq==1) cout << "1" << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
