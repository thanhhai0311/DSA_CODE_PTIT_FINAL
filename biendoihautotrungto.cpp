#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(auto x : s){
			if(isalpha(x)){
				st.push(string(1, x));
			}
			else{
				string o1=st.top();
				st.pop();
				string o2=st.top();
				st.pop();
				string tmp="("+o2+x+o1+")";
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
