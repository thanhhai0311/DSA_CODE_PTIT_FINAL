#include<bits/stdc++.h>

using namespace std;

string np(int n){
	string s;
	while(n>0){
		s=to_string(n%2)+s;
		n/=2;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1; i<=n; i++){
			cout << np(i) << " ";
		}
		cout << endl;
	}
}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	queue<string> q;
//	vector<string> v;
//	q.push("1");
//	while(1){
//		string tmp=q.front();
//		q.pop();
//		v.push_back(tmp);
//		if(v.size()==n) break;
//		q.push(tmp+"0");
//		q.push(tmp+"1");
//	}
//	for(auto x : v){
//		cout << x << " ";
//	}
//}
