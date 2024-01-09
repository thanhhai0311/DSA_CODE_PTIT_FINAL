//#include<bits/stdc++.h>
//
//using namespace std;
//using ll=long long;
//
//ll CrossSum(ll a[], int l, int m, int r){
//	vector<ll> v1(a+l, a+m+1);
//	vector<ll> v2(a+m+1, a+r+1);
//	ll sum=0;
//	ll left=INT_MIN;
//	for(int i=m; i>=l; i--){
//		sum+=a[i];
//		if(sum>=left) left=sum;
//	}
//	sum=0;
//	ll right=INT_MIN;
//	for(int i=m+1; i<=r; i++){
//		sum+=a[i];
//		if(sum>=right) right=sum;
//	}
//	return max({left, right, left+right});
//}
//
//ll solve(ll a[], int l, int r){
//	if(l>r) return 0;
//	if(l==r) return a[l];
//	else{
//		int m=(l+r)/2;
//		return max({solve(a, l, m), solve(a, m+1, r), CrossSum(a, l, m, r)});
//	}
//}
//
//int main(){
//	int n;
//	cin >> n;
//	ll a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}
//	cout << solve(a, 0, n-1) << endl;
//}


#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long sum1=0, sum2=0;
	for(int i=0; i<n; i++){
		sum1+=a[i];
		if(sum1>sum2){
			sum2=sum1;
		}
		if(sum1<0) sum1=0;
	}
	cout << sum2 << endl;
}
