#include<bits/stdc++.h>

using namespace std;

vector<string> v;
int n;

void Try(int k, int sum, string s){
	for(int i=k; i>=1; i--){
		if(sum==n){
			s.pop_back();
			v.push_back("("+s+")");
			return;
		}
		else if(sum<n) Try(i, sum+i, s+to_string(i)+" ");
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		Try(n, 0, "");
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
