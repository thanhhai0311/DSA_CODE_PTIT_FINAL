#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	int max=0;
	string gt;
	for(auto it : mp){
		if(it.second>max){
			max=it.second;
			gt=it.first;
		}
	}
	cout << gt;
	return 0;
}
