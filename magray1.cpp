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
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		khoitao();
		ok=1;
		while(ok==1){
			cout << a[1];
			for(int i=2; i<=n; i++){
				if(a[i-1]==a[i]) cout << "0";
				else cout << "1";
			}
			cout << " ";
			sinh();
		}	
		cout << endl;
	}
}
