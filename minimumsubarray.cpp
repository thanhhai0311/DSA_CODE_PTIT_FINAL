#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int l=0;
	int sum=0;
	int ans=INT_MAX;
	int r=0;
	int idex=-1;
	for(r=0; r<n; r++){
		sum+=a[r];
		while(sum>=k){
			if(ans>r-l+1){
				ans=r-l+1;
				idex=l;
			}
			sum-=a[l];
			l++;
		}
	}
	if(idex==-1) cout << "-1";
	else{
		for(int i=idex; i<=idex+ans-1; i++){
			cout << a[i] << " ";
		}
	}
}
