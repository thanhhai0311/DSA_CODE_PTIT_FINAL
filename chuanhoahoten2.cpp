#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int l=v.size();
		for(int i=0; i<l; i++){
			v[i][0]=toupper(v[i][0]);
		}
		switch(n){
			case 1:
				cout << v[l-1] << " " << v[0] << " ";
				for(int i=1; i<l-1; i++){
					cout << v[i] << " ";
				}
				cout << endl;
				break;
			case 2:
				for(int i=1; i<l-1; i++){
					cout << v[i] << " ";
				}
				cout << v[l-1] << " " << v[0];
				cout << endl;
				break;
		}
	}
	return 0;
}
