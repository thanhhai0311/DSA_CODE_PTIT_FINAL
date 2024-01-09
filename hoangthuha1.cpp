#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long k;
		int n;
		cin>>n>>k;
		int sum=0;
		if(k>0){
		    for( int i=1; i<=n;i++){
			    sum+=i%k;
	    	}
		    cout<<sum<<endl;
	    }
	}
}
