#include<bits/stdc++.h>

using namespace std;

int a[100], n, ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=1;
	else{
		int j=n;
		while(j>i && a[i]>a[j]){
			j--;
		}
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<=r){
			swap(a[l], a[r]);
			l++; r--; 
		}
	}
}

int main(){
	cin >> n;
	khoitao();
	ok=0;
	while(ok==0){
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
		}
		sinh();
		cout << endl;
	}	
}

// next_permutation
