#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
	long long ucln=__gcd(a, b);
	return (a*b)/ucln;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long bc1=bcnn(x, y);
		long long bc=bcnn(bc1, z);
		long long begin=pow(10, n-1);
		long long end=pow(10, n);
		long long ts=(long long)begin/bc;
		long long kq;
		if(begin%bc==0) kq=begin;
		else kq=(ts+1)*bc;
		if(kq>=end) cout << "-1" << endl;
		else cout << kq << endl;
		
	}
	return 0;
}
