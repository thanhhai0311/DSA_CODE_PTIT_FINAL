#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}	
		int dem=0;
		for(int i=0; i<n; i++){
			if(a[i]<=k) dem++;
		}
		int dem1=0;
		for(int i=0; i<dem; i++){
			if(a[i]<=k) dem1++;
		}
		int max=dem1;
		for(int i=dem; i<n; i++){
			if(a[i]<=k) dem1++;
			if(a[i-dem]<=k) dem1--;
			if(dem1>max) max=dem1; 
		}
		cout << dem-max << endl;
	}
	return 0;
}
