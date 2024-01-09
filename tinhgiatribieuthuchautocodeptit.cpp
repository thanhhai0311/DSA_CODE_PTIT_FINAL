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
		for(auto x : s){
			if(isdigit(x)){
				st.push(x-'0');
			}
			else{
				int o1=st.top();
				st.pop();
				int o2=st.top();
				st.pop();
				int tmp=tinh(o2, o1, x);
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
