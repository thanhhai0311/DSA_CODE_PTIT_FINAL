#include<bits/stdc++.h>

using namespace std;

int n, a[100], b[100];

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void Try(int i){
	if(i>0){
		cout << "[";
		for(int j=1; j<i; j++){
			cout << a[j] << " ";
		}
		cout << a[i] << ']' << endl;
		for(int j=1; j<i; j++){
			a[j]=a[j]+a[j+1];
		}
		Try(i-1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(n);
	}
}
