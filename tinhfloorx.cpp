#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin >> a[i];
		}
		auto it=upper_bound(a, a+n, k);
		if(it-a==0) cout << "-1" << endl;
		else{
			it--;
			cout << it-a+1 << endl;
		}
	}
}
