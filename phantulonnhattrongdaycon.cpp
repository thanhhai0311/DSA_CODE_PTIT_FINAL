#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		multiset<int> se;
		for(int i=0; i<k; i++){
			se.insert(a[i]);
		}
		cout << *se.rbegin() << " ";
		for(int i=1; i<=n-k; i++){
			auto it=se.find(a[i-1]);
			se.erase(it);
			se.insert(a[i+k-1]);
			cout << *se.rbegin() << " ";
		}
		cout << endl;
	}
	return 0;
}
