#include<bits/stdc++.h>

using namespace std;

int chanle(string &s){
	int l=s.size();
	if(s[l-1]%2==0) return 0;
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		vector<string> v;
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int l=v.size();
		int demchan=0, demle=0;
		for(auto x : v){
			if(chanle(x)==0) demchan++;
			if(chanle(x)==1) demle++;
		}
		if(((l%2==0)&&demchan>demle) || ((l%2!=0)&&demle>demchan)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
