//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//		for(int i=2; i<=sqrt(n); i++){
//			int dem=0;
//			while(n%i==0){
//				dem++;
//				n/=i;
//			}
//			if(dem>0){
//				cout << i << "^" << dem;
//				if(n!=1) cout << " * ";
//			}
//		}
//	if(n>1) cout << n << "^1";
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	long long n, p;
//	cin >> n >> p ;
//	int ans=0;
//	for(long long i=p; i<=n; i*=p){
//		ans+=n/i;
//	}
//	cout << ans;
//	return 0;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//long long dem(long long n, long long p){
//	long long ans=0;
//	for(long long i=p; i<=n; i*=p){
//		ans+=n/i;
//	}
//	return ans;
//}
//
//int main(){
//	long long n, p;
//	cin >> n >> p;
//	cout << dem(n, p) << endl;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//long long dem(long long n, long long p){
//	long long ans=0;
//	for(int i=p; i<=n; i*=p){
//		ans+=n/i;
//	}
//	return ans;
//}
//
//int main(){
//	int n; 
//	cin >> n;
//	//long long ans2=dem(n, 2);
//	long long ans5=dem(n, 5);
//	//if(ans2>ans5) cout << ans5;
//	//else cout << ans2;
//	cout << ans5;
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int tong(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool smith(int n){
	int tong1=tong(n);
	int tong2=0;
	int tmp=n;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			tong2+=tong(i);
			n/=i;
		}
	}
	if(tmp==n) return false;
	if(n>1){
		tong2+=tong(n);
	}
	return tong2==tong1;
}

int main(){
	long long n; 
	cin >> n;
	if(smith(n)==1) cout << "YES";
	else cout << "NO";
	return 0;
}
