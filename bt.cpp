#include<bits/stdc++.h>

using namespace std;

int n=9, k=2, a[100], ok;

void ktao(){
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void sinh(){  
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	ktao();
	ok=1;
	int dem=0;
	while(ok==1){
		sinh();
		dem++;
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		if(dem==3) break;
	}
	return 0;
}
