#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		long long c[n+m];
		long long tmp=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			c[tmp++]=a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			c[tmp++]=b[i];
		}
		sort(c, c+n+m);
		cout << c[k-1]<< endl;
	}
}
