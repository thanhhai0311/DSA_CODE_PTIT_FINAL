#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k; 
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	map<int, int> mp;
	long long ans=0, l=0;
	for(int i=0; i<n; i++){
		mp[a[i]]++;
		while(mp.size()>k){
			mp[a[l]]--;
			if(mp[a[l]]==0){
				mp.erase(a[l]);
			}
			l++;
		}
		ans+=i-l+1;
	}
	cout << ans;
}


//11 3
//5 4 4 5 4 4 2 1 5 2 4 
