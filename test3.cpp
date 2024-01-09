#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char> se;
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		se.insert(s[i]);
		mp[s[i]]++;
	}
	int max=0;
	int min=INT_MAX;
	char kt1, kt2;
	for(auto x : mp){
		if(x.second > max ){
			max=x.second;
			kt1=x.first;
		}
		if(x.second < min){
			min=x.second;
			kt2=x.first;
		}
	}
	cout << kt1 << endl << kt2 << endl;
	cout << se.size();
	return 0;
}
