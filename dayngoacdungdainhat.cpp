#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		int dem=0;
		st.push(-1);
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(!st.empty()){
					dem=max(dem, i-st.top());
				}
				else{
					st.push(i);
				}
			}
		}
		cout << dem << endl;
	}
}
