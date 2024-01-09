#include<bits/stdc++.h>

using namespace std;

int a[100], n, ok;

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
	if(i==0) ok=1;
	else a[i]=1;
}

int main(){
	cin >> n;
	khoitao();
	ok=0;
	while(ok==0){
		for(int i=1; i<=n; i++){
			if(a[i]==0) cout << "B";
			else cout << "A"; 
		}
		sinh();
		cout << endl;
	}
}
