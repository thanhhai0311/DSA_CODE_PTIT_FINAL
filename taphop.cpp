#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok, s;

void khoitao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
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

bool check(int a[], int k, int s){
	int sum=0; 
	for(int i=1; i<=k; i++){
		sum+=a[i];
	}
	if(sum==s) return true;
	return false;
}

int main(){
	while(1){
		cin >> n >> k >> s;
		if(n==0 && k==0 && s==0) break;
		else{
			if(n<k) cout << "0" << endl;
			else{
				khoitao();
				ok=0;
				int dem=0;
				while(ok==0){
					if(check(a, k, s)) dem++;
					sinh();
				}
				cout << dem << endl;
			}
		}
	}
}
