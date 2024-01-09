#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		set<long long> s;
		long long fn1=0, fn2=1;
		s.insert(fn1);
		s.insert(fn2);
		for(int i=3; i<500; i++){
			long long fn=fn1+fn2;
			s.insert(fn);
			fn1=fn2;
			fn2=fn;
		}
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(s.count(a[i])!=0) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
