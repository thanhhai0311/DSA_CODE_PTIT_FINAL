#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n, a[1000000];

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<ll> res;
	for(int i=0; i<n; i++){
		auto it=lower_bound(res.begin(), res.end(), a[i]);
		if(it==res.end()){
			res.push_back(a[i]);
		}
		else *it=a[i];
	}
	cout << res.size() << endl;
}
