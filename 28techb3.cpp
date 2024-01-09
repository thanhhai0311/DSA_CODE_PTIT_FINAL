#include<bits/stdc++.h>

using namespace std;

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int a[n][n];
	set<int> se;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			if(i==j) se.insert(a[i][j]);
			if(j==n-1-i) se.insert(a[i][j]);
		}
	}
	int dem=0;
	for(auto x : se){
		//cout << x << " ";
		if(nto(x)==1) dem++;
	}
	//cout << endl;
	cout << dem;
	return 0;
}
