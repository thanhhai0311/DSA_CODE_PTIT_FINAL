#include<bits/stdc++.h>

using namespace std;

long long dem;

void solve(string n){
	string s;
	queue<string> q;
	q.push("1");
	while(q.size()){
		s=q.front();
		q.pop();
		if(s.size()<n.size() || (s.size()==n.size() && s<=n)) dem++;
		else return;
		q.push(s+"0");
		q.push(s+"1");
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		dem=0;
		solve(s);
		cout << dem << endl;
	}
}
