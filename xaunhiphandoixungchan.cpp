#include<bits/stdc++.h>

using namespace std;

int n, ok;

string s;

void khoitao(){
	s=string(n, '0');
}

void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i==-1) ok=1;
	else s[i]='1';
}

bool check(){
	for(int i=0; i<s.size()-1; i++){
		if(s[i]!=s[s.size()-i-1]) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	vector<string> v;
	for(int i=1; i<=t/2; i++){
		n=i;
		ok=0;
		khoitao();
		while(ok==0){
			string t=s;
			reverse(t.begin(), t.end());
			v.push_back(s+t);
			sinh();
		}
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
}
	
