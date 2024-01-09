#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char> se;
	for(int i=0; i<s.size(); i++){
		se.insert(s[i]);
	}
	string t="";
	for(auto x : se){
		t+=x;
	}
	cout << t << endl;
	while(next_permutation(t.begin(), t.end())){
		cout << t;
		cout << endl;
	}
}
