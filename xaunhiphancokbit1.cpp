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

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int k; cin >> k;
		ktao();
 		ok=1;
		while(ok==1){
			int dem=0;
			for(int i=1; i<=n; i++){
				if(a[i]==1) dem++;
			}
			if(dem==k){
				for(int i=1; i<=n; i++){
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
	return 0;
}
