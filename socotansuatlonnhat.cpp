#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> mp;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	int max=0;
	int gt;
	for(auto x : mp){
		if(x.second>max){
			max=x.second;
			gt=x.first;
		}
	}
	cout << gt << " " << max;
	return 0;
}
