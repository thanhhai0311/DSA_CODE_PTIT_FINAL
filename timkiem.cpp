#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		int ok=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			//if(a[i]==k) ok=1;
		}
//		if(ok==1) cout << 1 << endl;
//		else cout << -1 << endl;
		if(binary_search(a, a+n, k)){
			cout << 1 << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}
