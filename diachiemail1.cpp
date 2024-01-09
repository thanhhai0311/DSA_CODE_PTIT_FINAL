#include<bits/stdc++.h>

using namespace std;

int main(){
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
	cout << v[l-1];
	for(int i=0; i<l-1; i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
	return 0;
}
