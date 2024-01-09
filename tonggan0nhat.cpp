#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int min=INT_MAX;
		int tong=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(abs(0-a[i]-a[j])<min){
					min=abs(0-a[i]-a[j]);
					tong=a[i]+a[j];
				} 
//				if(abs(a[i]+a[j])<min){
//					min=abs(a[i]+a[j]);
//					tong=a[i]+a[j];
//				}
			}
		}
		cout << tong << endl;
	}
	return 0;
}
