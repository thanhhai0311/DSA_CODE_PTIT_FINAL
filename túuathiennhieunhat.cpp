#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	map<string, int> mp;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		mp[tmp]++;
	}
	int max=0;
	string gt;
	for(auto x : mp){
		if(x.second>max){
			max=x.second;
			gt=x.first;
		}
	}
	cout << gt << endl;
}
