#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, m;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int j=0; j<m; j++){
			cin >> b[j];
		}
		sort(a, a+n);
		sort(b, b+m);
		long long int tich=a[n-1]*b[0];
		cout << tich << endl;
	}
}
