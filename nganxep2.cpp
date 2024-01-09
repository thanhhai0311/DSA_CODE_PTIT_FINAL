#include<bits/stdc++.h>

using namespace std;

int main(){
	stack<int> st;
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s=="PUSH"){
			int n;
			cin >> n;
			st.push(n);
		}
		if(s=="POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		if(s=="PRINT"){
			if(st.empty()){
				cout << "NONE" << endl;
			}
			else{
				cout << st.top() << endl;
			}
		}
	}	
}
