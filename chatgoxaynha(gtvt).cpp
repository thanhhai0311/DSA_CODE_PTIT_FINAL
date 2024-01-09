#include<bits/stdc++.h>

using namespace std;

int a[1000001], n, k;

bool check(long long res){
	long long sum=0;
	for(int i=0; i<n; i++){
		sum+=(a[i]-res);
	}
	return sum>=k;
}

int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	
	long long l=0, r=10000000000000;
	long long res;
	while(l<=r){
		long long m=(l+r)/2;
		if(check(m)){
			res=m;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	cout << res;
}
