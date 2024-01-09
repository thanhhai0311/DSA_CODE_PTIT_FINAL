#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		for(auto x : v){
			x[0]=toupper(x[0]);
		}
		for(int i=1; i<v.size(); i++){
			v[i][0]=toupper(v[i][0]);
			if(i==v.size()-1) cout << v[i] << ", ";
			else cout << v[i] << " ";
		}
		for(int i=0; i<v[0].size(); i++){
			v[0][i]=toupper(v[0][i]);
		}
		cout << v[0];
		cout << endl;
	}
}
