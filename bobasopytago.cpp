#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			a[i]=a[i]*a[i];
		}
		int ok=0;
		sort(a, a+n);
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(binary_search(a+j+1, a+n, a[i]+a[j])){
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
