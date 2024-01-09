#include<bits/stdc++.h>

using namespace std;

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int kq(int n){
	if(n==1) return 1;
	if(n%2==0) return 2;
	if(nto(n)==1) return n;
	for(int i=3; i<=sqrt(n); i++){
		if(nto(i)==1 && n%i==0){
			return i;
			break;
		}
	}
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cout << kq(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
