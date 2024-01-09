#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	string s1;
	getline(cin, s1);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tmp!=s1)
		cout << tmp << " ";
	}
	return 0;
}
