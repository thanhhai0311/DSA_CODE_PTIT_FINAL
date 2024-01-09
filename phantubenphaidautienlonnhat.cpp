#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i]=-1;
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]>a[i]){
					b[i]=a[j];
					break;
				}
			}
		}
		for(int i=0; i<n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
