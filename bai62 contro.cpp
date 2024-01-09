#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	long long a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int l=0;
	long long sum=0;
	int dem=0;
	for(int r=0; r<n; r++){
		sum+=a[r];
		while(sum>s){
			sum-=a[l];
			l++;
		}
		dem+=r-l+1;
	}
	cout << dem;
}
