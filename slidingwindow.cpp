#include<bits/stdc++.h>

using namespace std;

long long max(long long a, long long b){
	if(a>b) return a;
	return b;
}

int main(){
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for(int i=0; i<n ; i++){
		cin >> a[i];
	}
	long long sum=0;
	for(int i=0; i<k; i++){
		sum+=a[i];
	}
	long long res=sum;
	int index=0;
	for(int i=1; i<=n-k; i++){
		sum=sum-a[i-1]+a[i+k-1];
		if(sum>res){
			res=sum;
			index=i;
		}
	}
	cout << res << endl; 
	for(int i=index; i<index+k; i++){
		cout << a[i] << " ";
	}
}


