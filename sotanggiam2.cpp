#include<bits/stdc++.h>

using namespace std;

bool check1(string s){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]>s[i+1]) return false;
	}
	return true;
}

bool check2(string s){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]<s[i+1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check1(s) || check2(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
