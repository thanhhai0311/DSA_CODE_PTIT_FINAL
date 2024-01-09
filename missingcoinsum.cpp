#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long sum=1;
	sort(a, a+n);
	for(int i=0; i<n; i++){
		if(a[i]>sum){
			break;
		}
		else{
			sum+=a[i];
		}
	}
	cout << sum ;
}
