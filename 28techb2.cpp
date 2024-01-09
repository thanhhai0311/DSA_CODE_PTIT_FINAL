#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long long dem=0;
	for(int i=0; i<n-1; i++){
		int x=upper_bound(a+i+1, a+n, k-a[i])-a;
		set<int> s;
//		for(int j=x; j<n; j++){
//			s.insert(a[j]);
//		}
//		dem+=s.size();
		dem=dem+n-x;
	}
	cout << dem;
	return 0;
}
