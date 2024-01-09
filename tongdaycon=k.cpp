#include<bits/stdc++.h>

using namespace std;

int n, a[1000], ok;

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
	int k;
	cin >> n >> k;
	int b[n];
	for(int i=1; i<=n; i++){
		cin >> b[i];
	}
	ok=0;
	int dem=0;
	while(ok==0){
		int sum=0;
		for(int i=1; i<=n; i++){
			sum+=a[i]*b[i];
		}
		if(sum==k){
			for(int i=1; i<=n; i++){
				if(a[i]==1) cout << b[i] << " ";
			}
			dem++;
			cout << endl;
		}
		sinh();
	}
	cout << dem;
	return 0;
}
