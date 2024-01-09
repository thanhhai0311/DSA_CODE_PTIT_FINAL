#include<bits/stdc++.h>

using namespace std;

long long max1(long long a[], int l, int r){
	long long ans=0;
//	for(int i=l; i<=r; i++){
//		ans=max(ans, a[i]);
//	}
	sort(a+l+1, a+r+1);
	ans=a[r];
	return a[r];
}
// sort(a, a+n);
long long min1(long long a[], int l, int r){
	long long ans=INT_MAX;
//	for(int i=l; i<=r; i++){
//		ans=min(ans, a[i]);
//	}
	sort(a+l+1, a+r+1);
	ans=a[l];
	return a[l];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		vector<int> v;
		for(int i=0; i<n-1; i++){
			if(a[i]<a[i+1] && max1(a, 0, i)<min1(a, i+1, n-1)){
				v.push_back(i+1);
			}
		}
		cout << v.size() << endl;
		if(v.size()==0) cout << endl;
		else{
			for(int i=0; i<v.size(); i++){
				cout << v[i] << " ";
			}
		}
		cout << endl;
	}
}

