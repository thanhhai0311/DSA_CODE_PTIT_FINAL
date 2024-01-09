#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		sort(a, a+n);
		if(s.size()==1) cout << -1 << endl;
		else{
			cout << a[0] <<  " " << a[1] << endl;
		}
	}
	return 0;
}
