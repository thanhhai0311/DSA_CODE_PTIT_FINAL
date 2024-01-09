#include<bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	for(int i=0; i<t.size(); i++){
		t[i]=tolower(t[i]);
	}
	set<string> se1;
	set<string> se2;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		se1.insert(tmp);
	}
	stringstream sss(t);
	string tmp2;
	while(sss >> tmp2){
		se2.insert(tmp2);
	}
	for(auto x : se1){
		if(se2.count(x)!=1) cout << x << " ";
	}
	return 0;
}
