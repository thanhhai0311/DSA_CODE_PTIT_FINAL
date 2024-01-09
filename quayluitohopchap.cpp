#include<bits/stdc++.h>

using namespace std;

int n, k, X[100];

void Try(int i){
	for(int j=X[i-1]+1; j<=n-k+i; j++){
		X[i]=j;
		if(i==k){
			for(int m=1; m<=k; m++){
				cout << X[m];
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
