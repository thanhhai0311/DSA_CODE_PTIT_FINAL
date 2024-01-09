#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	for(int i=0; i<t; i++){
		string s;
		getline(cin, s);
		if(mp.find(s) == mp.end()) cout << s << endl;
		else cout << s << mp[s] << endl;
		mp[s]++;
	}
}
