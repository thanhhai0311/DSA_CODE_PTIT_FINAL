#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	vector<int> vl;
	vector<int> vc;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if((i+1)%2==0) vc.push_back(a[i]);
		else vl.push_back(a[i]);
	}
	sort(vl.begin(), vl.end());
	sort(vc.begin(), vc.end(), greater<int>());
	for(int i=0; i<max(vl.size(), vc.size()); i++){
		if(i<vl.size()) cout << vl[i] << " ";
		if(i<vc.size()) cout << vc[i] << " ";
	}
	return 0;
}
