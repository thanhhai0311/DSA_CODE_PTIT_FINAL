#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	multiset<int> mse;
	for(int i=0; i<k; i++){
		mse.insert(a[i]);
	}
	cout << *mse.begin() << " " << *mse.rbegin();
	cout << endl;
	for(int i=1; i<=n-k; i++){
		auto it=mse.find(a[i-1]);
		mse.erase(it);
		mse.insert(a[i+k-1]);
		cout << *mse.begin() << " " << *mse.rbegin();
		cout << endl;
	}
	return 0;
}
