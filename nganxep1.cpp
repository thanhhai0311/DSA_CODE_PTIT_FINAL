#include<bits/stdc++.h>

using namespace std;

int main(){
	stack<int> st;
	string s;
	while(cin >> s){
		if(s=="push"){
			int n;
			cin >> n;
			st.push(n);
		}
		if(s=="pop"){
			st.pop();
		}
		if(s=="show"){
			vector<int> v;
			if(st.empty()){
				cout << "empty" << endl;
			}
			else{
				while(!st.empty()){
				v.push_back(st.top());
				st.pop(); 
			}
			reverse(v.begin(), v.end());
			for(auto x : v){
				cout << x << " ";
				st.push(x);
			}
			cout << endl;
			}
		}
	}	
}
