#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
			if(s[i]=='.' || s[i]=='?' || s[i]=='!') s[i+1]=toupper(s[i+1]);
		}
		cout << s;
	}
}
