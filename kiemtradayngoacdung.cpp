#include<bits/stdc++.h>

using namespace std;

string solve(string s){
	stack<char> st;
	for(auto x : s){
		if(st.empty() || x=='(' || x=='[' || x=='{') st.push(x);
		else{
			if(x==')'){
				if(st.top()=='(') st.pop();
				else return "NO\n";
			}
			if(x==']'){
				if(st.top()=='[') st.pop();
				else return "NO\n";
			}
			if(x=='}'){
				if(st.top()=='{') st.pop();
				else return "NO\n";
			}
		}
	}
	if(!st.empty()) return "NO\n";
	return "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << solve(s);
	}
}
