#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		int dem=0;
		while(ss >> tmp){
			cout << tmp << endl;
			dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
