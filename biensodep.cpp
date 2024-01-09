#include<bits/stdc++.h>

using namespace std;

int check1(string s){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]>=s[i+1]) return 0;
	}
	return 1;
}

int check2(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i]!=s[0]) return 0;
	}
	return 1;
}

int check3(string s){
	if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) return 1;
	return 0;
}

int check4(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i]!='8' && s[i]!='6') return 0;
	}
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		string tmp=s.substr(5, 6);
		tmp.erase(3, 1);
		if(check1(tmp)==1 || check2(tmp)==1 || check3(tmp)==1 || check4(tmp)==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
