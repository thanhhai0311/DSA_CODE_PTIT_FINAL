#include<bits/stdc++.h>

using namespace std;

void solve(string s){
	int dem=0;
	stack<char> st;
	for(auto x : s){
		if(x=='(') st.push(x);
		else{
			if(st.empty()){
				dem++;
				st.push('(')
			}
			else st.pop();
		}
	}
	cout << dem+st.size()/2 << endl;
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
