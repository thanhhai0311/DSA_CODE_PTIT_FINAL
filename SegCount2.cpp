#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long l=0, sum=0, ans=0;
	for(int r=0; r<n; r++){
		sum+=a[r];
		while(sum>=s){
			ans+=(n-1-r+1);
			sum-=a[l];
			l++;
		}	
	}
	cout << ans;
}


//14 14
//4 4 5 1 3 1 3 4 1 1 5 4 1 4 
