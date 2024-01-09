#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, l;
	cin >> n >> l;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	double res=max(a[0], l-a[n-1]);
	for(int i=0; i<n-1; i++){
		if(double(a[i+1]-a[i])/2>res){
			res=double(a[i+1]-a[i])/2;
		}
	}
	cout << fixed << setprecision(10) << res;
}
