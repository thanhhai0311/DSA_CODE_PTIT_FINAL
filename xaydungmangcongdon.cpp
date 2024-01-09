#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	long long F[n+1];
	for(int i=1; i<=n; i++){
		if(i==1){
			F[i]=a[i];
		}
		else{
			F[i]=F[i-1]+a[i];
		}
	}
	for(int i=1; i<=n; i++){
		cout << F[i] << " ";
	}
	return 0;
}
