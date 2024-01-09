#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=1;
}

int main(){
	cin >> n;
	ok=0;
	khoitao();
	while(ok==0){
		int check=1;
		for(int i=1; i<=n/2; i++){
			if(a[i]!=a[n-i+1]) check=0;
		}
		if(check==1){
			for(int i=1; i<=n; i++){
				cout << a[i] << " ";	
			}
			cout << endl;
		}
		sinh();
	}
	return 0;
}
