#include<bits/stdc++.h>

using namespace std;

bool check1(char c){
	if(c=='A' || c=='E') return true;
	return false;
}

bool check2(string s){
	for(int i=1; i<s.size()-1; i++){
		if(!check1(s[i-1]) && !check1(s[i+1]) && check1(s[i])) return false;
	}
	return true;
}

int main(){
	char c;
	cin >> c;
 	string s="";
	for(char i='A'; i<=c; i++){
		s+=i;
	}
	if(check2(s)) cout << s << endl;
	while(next_permutation(s.begin(), s.end())){
		if(check2(s)) cout << s << endl;
	}
}
