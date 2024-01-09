#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for( int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int test=0;
		for( int i=1; i<n;i++){
			if(a[i]-a[i-1]!=1 && a[i]>=0&&a[i-1]>=0 ){
				cout<<a[i-1]+1<<endl;
				test=1;
				break;
			}
		
		}
		if(test==0){
			cout<<a[n-1]+1<<endl;
		}
	}
}
