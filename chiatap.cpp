#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k; 
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, greater<int>());
	k=max(k, n-k);
	long long s1=0, s2=0;
	for(int i=0; i<n; i++){
		if(i<k) s1+=a[i];
		else s2+=a[i];
	}
	cout << s1-s2 << " ";
}
