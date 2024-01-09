#include<bits/stdc++.h>

using namespace std;

int n, m;
set<int> Ke[1005];

void nhap(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		Ke[x].insert(y);
		Ke[y].insert(x);
	}
}

void euler(int u){
	stack<int> st;
	vector<int> EC;
	st.push(u);
	while(!st.empty()){
		int v=st.top();
		if(Ke[v].size()!=0){
			int y=*Ke[v].begin();
			st.push(y);
			Ke[v].erase(y);
			Ke[y].erase(v);
		}
		else{
			st.pop();
			EC.push_back(v);
		}
	}
	for(auto x : EC){
		cout << x << " ";
	}
}

int main(){
	nhap();
	euler(1);
}
