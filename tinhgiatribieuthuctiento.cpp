#include<bits/stdc++.h>

using namespace std;

int tinh(int a, int b, char c){
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	return a/b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i=s.size()-1; i>=0; i--){
			if(isdigit(s[i])){
				st.push(s[i]-'0');
			}
			else{
				int o1=st.top();
				st.pop();
				int o2=st.top();
				st.pop();
				int tmp=tinh(o1, o2, s[i]);
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
