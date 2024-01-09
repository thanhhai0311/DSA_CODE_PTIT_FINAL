#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int l=0, sum=0, ans=1e9;
	for(int r=0; r<n; r++){
		sum+=a[r];
		while(sum>=s){
			ans=min(r-l+1, ans);
			sum-=a[l];
			l++;
		}
	}
	if(ans==1e9) cout << "-1";
	else cout << ans;
}


//14 14
//4 4 5 1 3 1 3 4 1 1 5 4 1 4 
