#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n], b[n], j=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n; i+=2) b[i]=a[j++];
		for(int i=1; i<n; i+=2) b[i]=a[j++];
		for(int i=0; i<n; i++) cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}
