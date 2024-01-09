#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k+1];
		for(int i=1; i<=k; i++){
			cin >> a[i];
		}
		int ok=0, i=k-1;
		while(a[i]+1==a[i+1] && i>0){
			i--;
		}
		if(i==0){
			for(int j=n-k+1; j<=n; j++){
				cout << j << " "; 
			}
			cout << endl;
		}
		else{
			i++;
			a[i]--;
			for(int j=k; j>i; j--){
				a[j]=n-k+j;
			}
			for(int i=1; i<=k; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}
