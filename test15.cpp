#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n-1; i++){
		int pos=i;
		for(int j=i+1; j<n; j++){
			if(a[pos]>a[j]){
				pos=j;
			}
		}
		if(pos!=i) swap(a[pos], a[i]);
	}
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}
