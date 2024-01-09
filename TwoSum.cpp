#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k; 
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int l=0, r=n-1;
	long long ans=0;
	sort(a, a+n);
	while(l<r){
		if(a[l]+a[r]==k){
			cout << "YES" << endl;
			return 0;
		}
		else if(a[l]+a[r]<k) l++;
		else r--;
	}
	cout << "NO" << endl;
}


//5 28
//2 1 10 5 9 
