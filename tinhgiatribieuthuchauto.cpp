#include<bits/stdc++.h>

using namespace std;

void solve(string s){
	stack<int> st;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int o1=st.top();
			st.pop();
			int o2=st.top();
			st.pop();
			if(s[i]=='+') st.push(o1+o2);
			else if(s[i]=='-') st.push(o2-o1);
			else if(s[i]=='*') st.push(o1*o2);
			else if(s[i]=='/') st.push(o2/o1);
		}
	}
	cout << st.top() << endl;
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
