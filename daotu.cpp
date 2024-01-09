#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		getline(cin, s);
		vector<string> v;
		string tmp;
		stringstream ss(s);
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int l=v.size();
		for(int i=l-1; i>=0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
