#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int kq=0;
		for(int i=0; i<n; i++){
			if(a[i]==x){
				cout << i+1 << endl;
				kq=1;
				break;
			}
		}
		if(kq==0) cout << "-1" << endl;
	}
	return 0; 
}
