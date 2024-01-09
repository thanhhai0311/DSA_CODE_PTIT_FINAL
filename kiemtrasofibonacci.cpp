#include<bits/stdc++.h>

using namespace std;

//void fibo(int n){
//	set<long long> s;
//	int fn1=0, fn2=1;
//	s.insert(fn1);
//	s.insert(fn2);
//	for(int i=3; i<=n; i++){
//		long long fn=fn1+fn2;
//		s.insert(fn);
//		fn2=fn1;
//		fn1=fn;
//	}
//}

int main(){
	int tc;
	cin >> tc;
	set<long long> s;
	int fn1=0, fn2=1;
	s.insert(fn1);
	s.insert(fn2);
	for(int i=3; i<=500; i++){
		long long fn=fn1+fn2;
		s.insert(fn);
		fn2=fn1;
		fn1=fn;		
	}
	for(int t=0; t<tc; t++){
		long long n;
		cin >> n;
		if(s.count(n)==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}	
	return 0;
}

//#include<bits/stdc++.h>

//using namespace std;
//
//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		long long n;
//		cin >> n;
//		long long a=1, b=1;
//		if(n<=3) cout << "YES" << endl;
//		else{
//			while(a<n){
//				long long k=a+b;
//				b=a;
//				a=k;
//			}
//			if(a==n) cout << "YES" << endl;
//			else cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
