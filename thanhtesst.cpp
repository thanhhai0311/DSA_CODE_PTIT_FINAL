#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		ll a[n];
		for(auto &x:a){
			cin>>x;
		}
		sort(a,a+n);
		ll l=0, r=n-1;
		ll min=INT_MAX, res;
		while(l < r){
			if(abs(a[l] + a[r]) < min){
				min=abs(a[l] + a[r]);
				res= a[l] + a[r];
				if(res < 0){
				l++;
			}else if(res > 0){
				r--;
			}else
				break;
			}
			}
			cout<<res<<endl;
		}
	}
