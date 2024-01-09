#include<bits/stdc++.h>

using namespace std;

int a[100], n, dem, ok;

void khoitao(){
	dem=1;
	a[1]=n;
}

void sinh(){
	int i=dem;
	while(i>0 && a[i]==1){
		i--;
	}
	if(i==0) ok=1;
	else{
		a[i]--;
		int tmp=dem-i+1;
		dem=i;
		int q=tmp/a[i], r=tmp%a[i];
		for(int j=1; j<=q; j++){
			a[++dem]=a[i];
		}
		if(r!=0) a[++dem]=r;
	}
}

int main(){
	cin >> n;
	khoitao();
	ok=0;
	int ans=0;
	while(ok==0){
//		for(int i=1; i<=dem; i++){
//			if(i<dem){
//				cout << a[i] << "+";
//			}
//			else cout << a[i];
//		}
		ans++;
		sinh();
//		cout << endl;
	}
	cout << ans << endl;
	khoitao();
	ok=0;
	while(ok==0){
		for(int i=1; i<=dem; i++){
			if(i<dem){
				cout << a[i] << "+";
			}
			else cout << a[i];
		}
		sinh();
		cout << endl;
	}
}
