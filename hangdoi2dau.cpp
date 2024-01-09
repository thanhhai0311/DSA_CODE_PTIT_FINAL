#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	deque<int> q;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		if(s=="PUSHFRONT"){
			int x;
			cin >> x;
			q.push_front(x);
		}
		if(s=="PRINTFRONT"){
			if(q.empty()) cout << "NONE" << endl;
			else cout << q.front() << endl;
		}
		if(s=="POPFRONT"){
			if(!q.empty()){
				q.pop_front();
			}
		}
		if(s=="PUSHBACK"){
			int x;
			cin >> x;
			q.push_back(x);
		}
		if(s=="PRINTBACK"){
			if(q.empty()) cout << "NONE" << endl;
			else cout << q.back() << endl;
		}
		if(s=="POPBACK"){
			if(!q.empty()){
				q.pop_back();
			}
		}
	}
}
