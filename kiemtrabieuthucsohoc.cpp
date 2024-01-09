#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
 	while(t--){
 		string s;
		getline(cin, s);
		stack<char> st;
		int check=0;
		for(auto x : s){
			if(x!=')'){
				st.push(x);
			}
			else{
				bool ok=true;
				while(st.top()!='('){
					char tmp=st.top();
					if(tmp=='+' || tmp=='-' || tmp=='*' || tmp=='/'){
						ok=false;
					}
					st.pop();
				}
				st.pop();
				if(ok==true){
					cout << "Yes" << endl;
					check=1;
					break;
				}
			}
		}
		if(check==1) continue;
		cout << "No" << endl;
	}
}
		
		

