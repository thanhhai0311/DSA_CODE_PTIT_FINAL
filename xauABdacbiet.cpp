#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

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

bool check(int a[], int n, int k){
	int dem=1;
	int ok=0;
	for(int i=2; i<=n; i++){
		if(a[i]==0 && a[i-1]==0){
			dem++;
		}
		else dem=1;
		if(dem>k) return false;
		if(dem==k) ok++;
	}
	if(ok==1) return true;
	return false;
}

int main(){
	int k;
	cin >> n >> k;
	ktao();
 	ok=1;
 	vector<string> v;
	while(ok==1){
		if(check(a, n, k)){
			string tmp="";
			for(int i=1; i<=n; i++){
				if(a[i]==0) tmp+='A';
				else tmp+='B';
			}
			v.push_back(tmp);
			sinh();
		}
		else sinh();
	}
	cout << v.size() << endl;
	for(auto x : v){
		cout << x << endl;
	}
	return 0;
}
