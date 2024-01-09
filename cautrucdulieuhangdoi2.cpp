#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	queue<int> q;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		if(s=="PUSH"){
			int x;
			cin >> x;
			q.push(x);
		}
		if(s=="PRINTFRONT"){
			if(q.empty()) cout << "NONE" << endl;
			else cout << q.front() << endl;
		}
		if(s=="POP"){
			if(!q.empty()){
				q.pop();
			}
		}
	}
}
