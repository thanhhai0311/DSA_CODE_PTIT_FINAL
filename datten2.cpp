#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok;

void khoitao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}	
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=1;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok=0;
		khoitao();
		while(ok==0){
			for(int i=1; i<=k; i++){
				cout << char(a[i]+64);
			}
			sinh();
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
