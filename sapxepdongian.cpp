#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n]={0};
	int res=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[a[i]]=b[a[i]-1]+1;
		res=max(res, b[a[i]]);
	}
	cout << n-res << endl;
}
