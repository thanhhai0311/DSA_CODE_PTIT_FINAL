#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		map<char, int> mp;
		int l=s.size();
		for(int i=0; i<l; i++){
			mp[s[i]]++;
		}
		int max=0;
		for(auto x : mp){
			if(x.second>max) max=x.second;
		}
		int kt=l-max;
		if(max-kt<=1) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
