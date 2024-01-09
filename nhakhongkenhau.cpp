#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int res=0;
		int dp[n+5];// dp[i]: gia tri lon nhat cua day khong lien tiep ket thuc o vi tri i
		dp[0]=a[0];
		dp[1]=max(a[0], a[1]);
		for(int i=2; i<n; i++){
			dp[i]=max(dp[i-1], a[i]+dp[i-2]);
			res=max(res, dp[i]);
		}
		cout << res << endl;
	}
}
