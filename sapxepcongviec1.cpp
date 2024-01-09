#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i=0; i<n; i++){
			cin >> a[i].first;
		}
		for(int i=0; i<n; i++){
			cin >> a[i].second;
		}
		sort(a, a+n, [](pair<int, int> a, pair<int, int> b)->bool{
			return a.second<b.second;
		});
		long long ans=1, kt=a[0].second;
		for(int i=1; i<n; i++){
			if(kt<=a[i].first){
				ans++;
				kt=a[i].second;
			}
		}
		cout << ans << endl;
	}
}
