#include<bits/stdc++.h>

using namespace std;

int n, x, y;

bool check(long long res){
	res-=min(x, y);
	return res/x + res/y >=n-1;
}

int main(){
	cin >> n >> x >> y;
	long long l=0, r=1ll * min(x, y) * n;
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
