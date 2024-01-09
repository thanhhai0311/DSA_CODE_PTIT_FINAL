#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<pair<int, int>> q;
		q.push({n, 0});
		while(1){
			pair<int, int> tmp=q.front();
			q.pop();
			if(tmp.first==1){
				cout << tmp.second << endl;
				break;
			}
			if(tmp.first%2==0){
				q.push({tmp.first/2, tmp.second+1});
			}
			if(tmp.first%3==0){
				q.push({tmp.first/3, tmp.second+1});
			}
			if(tmp.first>1){
				q.push({tmp.first-1, tmp.second+1});
			}
		}
	}
}
