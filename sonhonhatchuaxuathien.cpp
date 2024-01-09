#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; 
	cin >> t;
	for(int i=0; i<t; i++){
		int n; 
		cin >> n;
		int a[n];
		for(int j=0; j<n; j++){
			cin >> a[j];
		}
		sort(a,a+n);
		int kq=0;
		for(int j=1; j<n; j++){
			if(a[j]-1!=a[j-1] && a[j-1]>=0){
				cout << a[j-1]+1 << endl;
				kq=1;
				break;
			}
		}
		int ktr=0;
		for(int j=0; j<n; j++){
			if(a[j]==1){
				ktr=1;
				break;
			}
		}
		if(ktr==0) cout << "1" << endl;
		int kt=0;
		for(int j=0; j<n; j++){
			if(a[j]>0){
				kt=1;
				break;
			}
		}
		if(kt==0) cout << "1" << endl;
		if(kq==0 && kt==1 && ktr==1) cout << a[n-1]+1 << endl;
	}
	return 0;
}
