#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		map<char, long long> mp;
		for(auto x : s){
			mp[x]++;
		}
		priority_queue<long long> q;
		for(auto x : mp){
			q.push(x.second);
		}
		while(n>0){
			int tmp=q.top();
			q.pop();
			tmp--;
			n--;
			q.push(max(tmp, 0));
		}
		long long tong=0;
		while(!q.empty()){
			int tmp=q.top();
			q.pop();
			tong+=1ll*tmp*tmp;
		}
		cout << tong << endl;
	}
}
