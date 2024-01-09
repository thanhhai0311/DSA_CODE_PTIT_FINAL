#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		map<char, int> mp;
		string s;
		cin >> s;
		int l=s.size();
		for(int i=0; i<l; i++){
			mp[s[i]]++;
		}
		for(int i=0; i<l; i++){
			if(mp[s[i]]>0) cout << s[i] << mp[s[i]];
			mp[s[i]]=0;
		}
		cout << endl;
	}
	return 0;
}
