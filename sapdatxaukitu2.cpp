#include<bits/stdc++.h>

using namespace std;

int max(int a, int b){
	if(a>b) return a;
	return b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long d;
		cin >> d;
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i=0; i<s.size(); i++){
			mp[s[i]]++;
		}
		long long res=0;
		for(auto x : mp){
			res=max(res, x.second);
		}
		long long l=s.size();
		if(l%d==0){
			if(res>l/d) cout << "-1" << endl;
			else cout << "1" << endl;
		}
		else{
			if(res>(l/d)+1) cout << "-1" << endl;
			else cout << "1" << endl;
		}
	}
}
