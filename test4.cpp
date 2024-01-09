#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	set<string> se;
	while(ss >> tmp){
		se.insert(tmp);
	}
	cout << se.size() << endl;
	cout << *se.begin() << *se.rbegin() << endl;
}
