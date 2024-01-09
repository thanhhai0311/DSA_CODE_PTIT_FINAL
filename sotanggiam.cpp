#include<bits/stdc++.h>

using namespace std;

int nto(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int tang(long long n){
	while(n>=10){
		int a=n%10;
		if(a<=(n/10)%10){
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}

int giam(long long n){
	while(n>=10){
		int a=n%10;
		if(a>=(n/10)%10){
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int bd=pow(10, n-1);
		int kt=pow(10, n);
		int dem=0;
		for(int i=bd; i<kt; i++){
			if(tang(i)==1 || giam(i)==1){
				if(nto(i)==1){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
