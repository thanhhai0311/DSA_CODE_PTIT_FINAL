#include<bits/stdc++.h>

using namespace std;

string solve(int n){
	string s;
	queue<string> q;
	q.push("1");
	while(q.size()){
		s=q.front();
		q.pop();
		if(stoll(s)%n==0) return s;
		else{
			q.push(s+"0");
			q.push(s+"1");
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
}
