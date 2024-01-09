#include<bits/stdc++.h>

using namespace std;

void inthuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
}

int main(){
	string s;
	cin >> s;
	inthuong(s);
	cout << s;
}
