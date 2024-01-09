#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, Q;
		cin >> n >> Q; 
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int j=0; j<Q; j++){
			int l, r;
			cin >> l >> r;
			int tong=0;
			for(int k=l-1; k<r; k++){
				tong+=a[k];
			}
			cout << tong << endl;
		}
	}
	return 0;
}
