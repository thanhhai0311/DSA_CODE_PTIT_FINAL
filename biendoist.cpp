#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s, t;
		cin >> s >> t;
		set<int> se;
		queue<pair<int, int>> q;
		q.push({s, 0});
		while(1){
			pair<int, int> top=q.front();
			q.pop();
			if(top.first==t){
				cout << top.second << endl;
				break;
			}
			else{
				if(top.first>0 && !se.count(top.first-1)){
					q.push({top.first-1, top.second+1});
					se.insert(top.first-1);
				}
				if(top.first<t && !se.count(top.first*2)){
					q.push({top.first*2, top.second+1});
					se.insert(top.first*2);
				}
			}
		}
	}
}
