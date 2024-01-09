#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		int kq=-1;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
			if(mp[a[i]]>1 && kq==-1) kq=a[i];
		}
		cout << kq << endl;
	}
	return 0;
}
