#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		set<int> se;
		for(int i=0; i<n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		int l=se.size();
		if(l==1) cout << "-1" << endl;
		else{
			sort(a, a+n);
			cout << a[0] << " ";
			se.erase(a[0]);
			cout << *se.cbegin();
			cout << endl;
		}
	}
	return 0;
}
