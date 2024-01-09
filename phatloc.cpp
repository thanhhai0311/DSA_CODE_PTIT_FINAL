#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=6;
	}
}

void sinh(){
	int i=n;
	while(a[i]==8){
		a[i]=6;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=8;
}

bool check1(){
	for(int i=1; i<n; i++){
		if(a[i]==8 && a[i+1]==8) return false;
	}
	return true;
}

bool check2(){
	for(int i=3; i<n; i++){
		if(a[i-2]==6 && a[i-1]==6 && a[i]==6 && a[i+1]==6) return false;
	}
	return true;
}

bool check3(){
	if(a[1]!=8 || a[n]!=6) return false;
	return true;
}
int main(){
	cin >> n;
	ok=0;
	khoitao();
	while(ok==0){
		if(check1() && check2() && check3()){
			for(int i=1; i<=n; i++){
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
	return 0;
}
