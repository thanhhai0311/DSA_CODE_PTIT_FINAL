//#include<bits/stdc++.h>
//
//using namespace std;
//int n, s, a[1000], ok;
//
//void nhap(){
//	cin >> n >> s;
//	for(int i=1; i<=n; i++){
//		cin >> a[i];
//	}
//}
//
//void Try(int i, int idex, long long sum){
//	for(int j=idex; j<=n; j++){
//		if(sum<s){
//			sum+=a[j];
//		}
//		if(sum==s){
//			ok=1;
//			break;
//		}
//		else{
//			if(ok==1) break;
//			else Try(i+1, j+1, sum);
//		}
//		sum-=a[i];
//	}
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		nhap();
//		Try(1, 1, 0);
//		if(ok==1) cout << "YES" << endl;
//		else cout << "NO" << endl;
//		ok=0;
//	}	
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int dp[s]={0};
		dp[0]=1;
		for(int i=0; i<n; i++){
			for(int j=s; j>=a[i]; j--){
				if(dp[j-a[i]]==1) dp[j]=1;
			}
		}
		if(dp[s]==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
