#include<bits/stdc++.h>

using namespace std;

long long max(long long a, long long b){
	if(a>=b) return a;
	return b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		long long res=0, ans;
		int check=0;
		for(int i=0; i<n; i++){
			int k=i;
			for(int j=i+1; j<n; j++){
				if(a[j]>a[k]){
					ans=max(res, j-k);
					res=ans;
					check=1;
				}
			}
		}
		if(check==0) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
