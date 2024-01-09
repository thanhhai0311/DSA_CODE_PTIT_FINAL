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
	auto it=next(mse.begin(), (k-1)/2);
	for(int i=k; i<n; i++){
		cout << *it << " ";
		mse.insert(a[i]);
		if(a[i]<*it) it--;
		if(a[i-k]<=*it) it++;
		mse.erase(mse.find(a[i-k]));
	}
	cout << *it << " ";
	return 0;
}




