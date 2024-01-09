#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
	long long ucln=__gcd(a, b);
	int kq=(a*b)/ucln;
	return kq;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long M, N, A, B;
		cin >> M >> N >> A >> B;
		int a=bcnn(A, B);
		int dem=0;
		for(long long i=M; i<=N; i++){
			if(i%a==0) dem++;
			if(i%A==0 && i%B!=0) dem++;
			if(i%A!=0 && i%B==0) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
