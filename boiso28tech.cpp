#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> q;
		q.push("8");
		while(1){
			string tmp=q.front();
			q.pop();
			if(stoll(tmp)%n==0){
				cout << tmp << endl;
				break;
			}
			else{
				q.push(tmp+"0");
				q.push(tmp+"8");
			}
		}
	}
}
