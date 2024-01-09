#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	map<string, int> mp;
	for(int t=0; t<tc; t++){
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int l=v.size();
		mp[v[l-1]]++;
		cout << v[l-1];
		for(int i=0; i<l-1; i++){
			cout << v[i][0];
		}
		if(mp[v[l-1]]>1) cout << mp[v[l-1]];
		cout << "@ptit.edu.vn";
		cout << endl;
	}
	return 0;
}
