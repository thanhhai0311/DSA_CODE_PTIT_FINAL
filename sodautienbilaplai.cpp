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
		if(mp.size()==n) cout << "NO" << endl;
		else{
			for(int i=0; i<n; i++){
				if(mp[a[i]]>1){
					cout << a[i] << endl;
					break;
				}
			}
		}
	}
}
