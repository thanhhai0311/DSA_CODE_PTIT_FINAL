#include<bits/stdc++.h>

using namespace std;

long long max(long long a, long long b){
	if(a>b) return a;
	return b;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, greater<int>());
	if(n>=3){
		long long t1=a[n-1]*a[n-2];
		long long t2=a[n-1]*a[n-2]*a[0];
		long long t3=a[0]*a[1];
		long long t4=a[0]*a[1]*a[2];
		long long ans;
		ans=max(t1, t2);
		ans=max(ans, t3);
		ans=max(ans, t4);
		cout << ans << endl;
	}
}
