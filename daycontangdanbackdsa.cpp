#include<bits/stdc++.h>

using namespace std;

bool check(int a[], int n){
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]) return false;
	}
	return true;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	
	string s=string(n-k, '0')+string(k, '1');
	int dem=0;
	int b[k];
	int x=0;
	for(int i=0; i<n; i++){
		if(s[i]=='1') b[x++]=a[i];
	}
	//cout << tmp << endl;
	if(check(b, k)) dem++;
//	while(next_permutation(s.begin(), s.end())){
//		tmp="";
//		for(int i=0; i<n; i++){
//			if(s[i]=='1') tmp+=to_string(a[i]);
//		}
//		if(check(tmp)) dem++;
//	}
	cout << dem << endl;
}
