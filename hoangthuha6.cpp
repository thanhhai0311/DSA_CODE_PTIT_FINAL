#include<bits/stdc++.h>
using namespace std;

int sothuannghich ( long long n){
	int b[501];
	int i,j=0;
	while(n>0){
		b[j]=n%10;
		n/=10;
		j++;
	}
	for( int i=0; i<j/2;i++){
		if( b[i]!=b[j-1-i]){
			return 0;
		}
	}
	return 1;
}
int chusochan(long long n){
	int b[501];
	int i,j=0;
		while(n>0){
		b[j]=n%10;
		n/=10;
		j++;
	}
	for( int i=0; i<j;i++){
		if( b[i] %2 !=0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if( sothuannghich(n)==1 && chusochan(n)==1){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
