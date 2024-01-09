#include<bits/stdc++.h>

using namespace std;

int a[1000001], k, n;

bool check(long long res){
	long long sum=0, cnt=0;
	for(int i=0; i<n; i++){
		sum+=a[i];
		if(sum>res){
			cnt++;
			sum=a[i];
		}
	}
	cnt++;
	return cnt<=k;
}

int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long l=*max_element(a, a+n);
	long long r=accumulate(a, a+n, 0ll);
	long long res;
	while(l<=r){
		long long m=(l+r)/2;
		if(check(m)){
			res=m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout << res;
}


