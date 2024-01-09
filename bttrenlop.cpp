#include<bits/stdc++.h>

using namespace std;

int k, n, a[100], ok, kq;

void ktao(){
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

int toiuu(){
	int tl[n];
	int gtsd[n];
	for(int i=1; i<=n; i++){
		cin >> tl[i] >> gtsd[i];
	}
	int gtsdtu=0;
	for(int i=1; i<=n; i++){
		gtsdtu+=gtsd[i]*a[i];
	}
	return gtsdtu;
}
	
int main(){
	cin >> n >> k;
	ktao();
 	ok=1;
 	vector<int> v;
	while(ok==1){
		v.push_back(toiuu());
		sinh();
	}
	int max=0;
	for(int i=0; i<v.size(); i++){
		if(v[i]>max) max=v[i];
	}
	cout << max << endl;
	return 0;
}
