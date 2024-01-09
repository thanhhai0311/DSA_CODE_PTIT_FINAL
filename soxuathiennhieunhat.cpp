#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int min=n/2;
		int max=0;
		int ok=0;
		int ans;
		for(auto x : mp){
			if(x.second>min && x.second>max){
				ans=x.first;
				max=x.second;
				ok=1;
			}
		}
		if(ok==1) cout << ans << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
