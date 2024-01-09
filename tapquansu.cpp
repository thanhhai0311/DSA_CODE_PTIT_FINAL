#include<bits/stdc++.h>

using namespace std;

int a[100], n, k, ok;

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

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int b[k];
		ok=0;
		int dem=0;
		set<int> se;
		for(int i=1; i<=k; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		int l=se.size();
		sinh();
		if(ok==1) dem=k;
		else{
			for(int i=1; i<=k; i++){
				se.insert(a[i]);
			}
			dem=se.size()-l;
		}
		cout << dem << endl;
	}	
}
