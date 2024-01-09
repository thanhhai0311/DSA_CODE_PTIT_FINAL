#include<bits/stdc++.h>

using namespace std;

int a[1000001], n, k;

bool check(long long res){
	long long cnt=0;
	for(int i=0; i<n; i++){
		cnt+=res/a[i];
	}
	return cnt>=k;
}

int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long l=0, r=1ll*k*(*min_element(a, a+n));
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
