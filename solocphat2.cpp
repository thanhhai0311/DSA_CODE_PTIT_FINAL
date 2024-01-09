#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		vector<string> v;
		q.push("6");
		q.push("8");
		string tmp;
		while(n){
			tmp=q.front();
			q.pop();
			if(tmp.size()>n) break;
			else{
				v.push_back(tmp);
				q.push(tmp+"6");
				q.push(tmp+"8");
			}
		}
		cout << v.size() << endl;
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
