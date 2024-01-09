#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i=s.size()-1; i>=0; i--){
			if(isalpha(s[i])){
				st.push(string(1, s[i]));
			}
			else{
				string o1=st.top();
				st.pop();
				string o2=st.top();
				st.pop();
				string tmp="("+o1+s[i]+o2+")";
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
