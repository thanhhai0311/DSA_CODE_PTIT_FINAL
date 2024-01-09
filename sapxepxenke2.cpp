#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(a, a+n, greater<int>());
		int j=0, l=0, r=n-1;
		while(l<r){
			cout << a[l] << " ";
			cout << a[r] << " ";
			l++; r--;
		}
		if(l==r) cout << a[l];
		cout << endl;
	}
	return 0;
}
