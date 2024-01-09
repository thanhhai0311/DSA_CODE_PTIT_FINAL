#include<bits/stdc++.h>

using namespace std;

int ktra(long long n){
	if(n%2==0) return 1;
	return 0;
}

int nto(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int dem=0;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0 && ktra(i)==1 && ktra(n/i)==1){
				if(i*i!=n) dem+=2;
				else{
					if(ktra(n)==1) dem++;
				}
			}
			if(n%i==0 && ktra(i)==1 && ktra(n/i)==0){
				dem+=1;
			}
			if(n%i==0 && ktra(i)==0 && ktra(n/i)==1){
				dem+=1;
			}	
		}
		if(ktra(n)==1) dem++;
		cout << dem << endl;
	}
	return 0; 
}
