#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int k, dem=0;
		for(int i=0; i<n-1; i++){
			k=i;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[k]){
					k=j;
				}
			}
			if(k!=i){
				dem++;
				swap(a[i], a[k]);
			} 
		}
		cout << dem << endl;
	}
	return 0;
}
