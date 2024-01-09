#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<string, int> mp;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		mp[tmp]++;
	}
	for(auto x : mp){
		if(x.second>=2){
			cout << x.first;
			break;
		}
	}
	return 0;
}
