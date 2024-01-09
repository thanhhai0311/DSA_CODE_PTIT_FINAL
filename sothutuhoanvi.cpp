#include<bits/stdc++.h>

using namespace std;

int n, a[100];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int dem=1;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		while(prev_permutation(a, a+n)){
			dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
