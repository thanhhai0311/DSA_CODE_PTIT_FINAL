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
		int kt=0;
		for(int i=1; i<n; i++){
			if(a[i]>a[i-1]){
				kt=1;
				break;
			}
		}
		int max=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]-a[i]>max) max=a[j]-a[i];
			}
		}
		if(kt==0) cout << "-1" << endl;
		else cout << max << endl;
	}
	return 0;
}
