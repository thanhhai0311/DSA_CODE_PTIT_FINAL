#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int dem=0;
		for(int i=0; i<n; i++){
			for(int j=i; i<n; j++){
				if(abs(a[i]-a[j])<k) dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
