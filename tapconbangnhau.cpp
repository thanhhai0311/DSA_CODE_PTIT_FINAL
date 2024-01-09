#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long sum=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%2!=0){
			cout << "NO" << endl;
		}
		else{
			int dp[sum]={0};
			dp[0]=1;
			for(int i=0; i<n; i++){
				for(int j=sum; j>=a[i]; j--){
					if(dp[j-a[i]]==1) dp[j]=1;
				}
			}
			if(dp[sum]==1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
