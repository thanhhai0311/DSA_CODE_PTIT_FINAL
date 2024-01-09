#include<bits/stdc++.h>

using namespace std;

long long max(int a, int b){
	if(a>b) return a;
	return b;
}

int main(){
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	int max1=0;
	for(auto it : mp){
		max1=max(it.second, max1);
	}
	//cout << max1 << endl;
	long long l=s.size();
	l-=max1;
	//cout << l << endl;
	if(max1-l<=1) cout << "YES";
	else cout << "NO";
}
