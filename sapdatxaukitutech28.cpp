#include<bits/stdc++.h>

using namespace std;

long long max(int a, int b){
	if(a>b) return a;
	return b;
}

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	priority_queue<long long> q;
	for(auto x : mp){
		q.push(x.second);
	}
	for(int i=0; i<n; i++){
		long long tmp=q.top();
		q.pop();
		q.push(max(tmp-1, 0));
	}
	long long ans=0;
	while(q.size()>1){
		long long tmp=q.top();
		q.pop();
		ans+=tmp*tmp;
	}
	ans+=q.top()*q.top();
	cout << ans << endl;
}
