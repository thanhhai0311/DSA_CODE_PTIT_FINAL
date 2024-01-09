#include<bits/stdc++.h>

using namespace std;

int uutien(char s){
	if(s=='^') return 3;
	if(s=='*' || s=='/') return 2;
	if(s=='+' || s=='-') return 1;
	if(s=='(' || s==')') return 0;
}

void solve(string s){
	string res="";
	stack<char> st;// luu toan tu, (
	for(auto x : s){
		if(isalpha(x)){
			res+=x;
		}
		else if(x=='(') st.push(x);
		else if(x==')'){
			while(!st.empty() && st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && uutien(st.top())>=uutien(x)){
				res+=st.top();
				st.pop();
			}
			st.push(x);
		}
	}
	while(!st.empty()){
		if(st.top()!='(' && st.top()!=')') res+=st.top();
		st.pop();
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve(s);
	}
}
