#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long sum=0;
	sort(a, a+n, greater<int>());
	for(int i=0; i<n; i++){
		if(a[i]>i){
			sum+=a[i]-i;
		}
	}
	cout << sum;
}


//4 4 4 4 
//4 3 3 3 sum=4;

