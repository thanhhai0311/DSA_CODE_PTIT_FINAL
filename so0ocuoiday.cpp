#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		long long a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i]=0;
		}
		int k=0;
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				b[k]=a[i];
				k++;
			}
		}
		for(int i=0; i<n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
