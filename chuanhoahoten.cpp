#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
	int l=s.size();
	s[0]=toupper(s[0]);
	for(int i=1; i<l-1; i++){
		s[i]=tolower(s[i]);
	}
}

void viethoa(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=toupper(s[i]);
	}
}

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
	for(int i=0; i<l-2; i++){
		chuanhoa(v[i]);
		cout << v[i] << " ";
	}
	chuanhoa(v[l-2]);
	viethoa(v[l-1]);
	cout << v[l-2] << ", " << v[l-1];
	return 0;
}
