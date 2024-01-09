#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	priority_queue<long long, vector<long long>, greater<long long>> q;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		q.push(x);
	}
	long long ans=0;
	while(q.size()>1){
		long long l1=q.top();
		q.pop();
		long long l2=q.top();
		q.pop();
		ans+=l1+l2;
		q.push(l1+l2);
	}
	cout << ans << endl;
}
