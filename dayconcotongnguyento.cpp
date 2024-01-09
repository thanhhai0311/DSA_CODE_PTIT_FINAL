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

bool check(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int mang[n+1];
		for(int i=1; i<=n; i++){
			cin >> mang[i];
		}
		sort(mang+1, mang+n+1, greater<int>());
		ktao();
 		ok=1;
		while(ok==1){
			int sum=0;
			for(int i=1; i<=n; i++){
				if(a[i]==1){
					sum+=mang[i];
				}
			}
			if(check(sum)){
				for(int i=1; i<=n; i++){
					if(a[i]==1) cout << mang[i] << " ";
				}
				cout << endl;
			}
			sinh();
		}
	}
	return 0;
}
