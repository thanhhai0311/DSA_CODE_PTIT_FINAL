#include<bits/stdc++.h>

using namespace std;

int nto(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int chp(int n){
	int a=sqrt(n);
	if(a*a==n) return 1;
	return 0;
}
int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long n;
		cin >> n;
		int dem=0;
		long long a=sqrt(n);
		for(long long i=1; i<=sqrt(n); i++){
			if(nto(i)==1) dem++;
		}
		
		cout << dem << endl;
	}
	return 0;
}
