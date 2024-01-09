#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	long long a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	} 
	for(int j=0; j<m; j++){
		cin >> b[j];
	}
	int i=0, j=0;
	while(i<n && j<m){
		while(b[j]>a[i]){
			i++;
		}
		cout << i << " ";
		j++;
		if(i==n){
			while(j<m){
				cout << i << " ";
				j++;
			}
		}
	}
}
