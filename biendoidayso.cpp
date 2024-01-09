#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int l=0, r=n-1, dem=0;
		while(l<=r){
			if(a[l]==a[r]){
				l++;
				r--;
			}
			else if(a[l]<a[r]){
				a[l+1]+=a[l];
				l++;
				dem++;
			}
			else if(a[l]>a[r]){
				a[r-1]+=a[r];
				r--;
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
