#include<bits/stdc++.h>

using namespace std;

int a[100], n, ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=1;
}

int main(){
	cin >> n;
	int b[n+1];
	for(int i=1; i<=n; i++){
		cin >> b[i];
	}
	ok=0;
	khoitao();
	long long ans=INT_MAX;
	while(ok==0){
		long long sum1=0, sum0=0;
		for(int i=1; i<=n; i++){
			if(a[i]==0) sum0+=b[i];
			else sum1+=b[i];
		}
		ans=min(ans, abs(sum1-sum0));
		sinh();
	}
	cout << ans << endl;
}
