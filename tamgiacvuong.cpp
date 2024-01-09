#include<bits/stdc++.h>

using namespace std;

long long test(long long a, long long b){
	long long c=a*a+b*b;
	long long k=sqrt(c);
	if(k*k!=c) return 0;
	return k;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int ok=-1;
		for(int i=0; i<n-2; i++){
			for(int j=i+1; j<n-1; j++){
				long long k=test(a[i], a[j]);
				if(k!=0 && binary_search(a, a+n, k)==1){
					ok=1;
					break;
				}
			}
		}
		if(ok==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0; 
}
