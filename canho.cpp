#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	sort(b, b+m);
	long long dem=0;
	int i=0, j=0;
	while(i<n && j<m){
		if(abs(a[i]-b[j])<=k){
			dem++;
			i++; j++;
		}
		else if(a[i]-b[j]>k){
			j++;
		}
		else{
			i++;
		}
	}
	cout << dem;
}
