#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<int> res;
	for(int i=0; i<n; i++){
		auto it=lower_bound(res.begin(), res.end(), a[i]);
		if(it==res.end()){
			res.push_back(a[i]);
		}
		else{
			*it=a[i];
		}
	}
	cout << res.size() << endl;
}
