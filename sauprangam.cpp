#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin , s);
	set<char> se;
	for(char x : s){
		se.insert(tolower(x));
	}
	if(se.size()==26) cout << "YES";
	else cout << "NO";
	return 0;
}
