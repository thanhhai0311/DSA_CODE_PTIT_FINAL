#include<bits/stdc++.h>

using namespace std;

int a[10000001], n, k;

bool check(float res){
	long long cnt=0;
	for(int i=0; i<n; i++){
		cnt+=(a[i]/res);
	}
	return cnt>=k;
}

int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	float l=0, r=10000000000000000;
	float res;
	for(int i=0; i<100; i++){
		float m=((float)l+(float)r)/2;
		if(check(m)){
			res=m;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	cout << fixed << setprecision(6) << res;
}

