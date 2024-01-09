#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string a, b;
		getline(cin, a);
		//cin.ignore();
		getline(cin, b);
		set<string> sa;
		set<string> sb;
		stringstream ss(a);
		string tmpa;
		while(ss >> tmpa){
			sa.insert(tmpa);
		}
		stringstream sss(b);
		string tmpb;
		while(sss >> tmpb){
			sb.insert(tmpb);
		}
		for(auto x : sa){
			if(sb.count(x)==0) cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
