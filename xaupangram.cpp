#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int k;
		cin >> k;
		set<char> se;
		for(int i=0; i<s.size(); i++){
			se.insert(s[i]);
		}
		if(26-se.size()<=k) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
