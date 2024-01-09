#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i=0; i<s.size(); i++){
			mp[s[i]]++;
		}
		for(auto x : mp){
			if(x.second==1) cout << x.first;
		}
		cout << endl;
	}
	return 0;
}
