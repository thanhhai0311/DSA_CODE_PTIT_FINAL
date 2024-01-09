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
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		cin >> n;
		ok=1;
		khoitao();
		while(ok==1){
			for(int i=1; i<=n; i++){
			cout << a[i];
			}
			sinh();
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
