#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long dem=0;
		for(int i=0; i<n-2; i++){
			for(int j=i+1; j<n-1; j++){
				auto it=lower_bound(a+j+1, a+n, k-a[i]-a[j]);
				it--;
				dem+=distance(a+j, it);
			}
		}
		cout << dem << endl;
	}
	return 0;
}
