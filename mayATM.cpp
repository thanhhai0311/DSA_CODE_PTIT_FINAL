#include<bits/stdc++.h>

using namespace std;

long long n, a[100], k, ok, b[100], s, t;

void nhap(){
	cin >> n >> s;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1, greater<int>());
}

void khoitao(){
	for(int i=1; i<=k; i++){
		b[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>0 && b[i]==n-k+i){
		i--;
	}
	if(i==0) ok=1;
	else{
		b[i]++;
		for(int j=i+1; j<=k; j++){
			b[j]=b[j-1]+1;
		}
	}
}

int main(){
//	int t;
	cin >> t;
	while(t--){
		nhap();
		int check=0;
		for(int i=1; i<=n; i++){
			k=i;
			khoitao();
			ok=0;
			while(ok==0){
				int sum=0;
				for(int j=1; j<=k; j++){
					sum+=a[b[j]];
				}
				if(sum==s){
					cout << k << endl;
					check=1;
					break;
				}
				else if(check==1) break;
				else{
					sinh();
				}
			}
		}
		if(check==0) cout << "-1" << endl;
	}
}
