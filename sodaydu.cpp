#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int l=s.size();
		set<char> se;
		for(int i=0; i<l; i++){
			if(s[i]>='0' && s[i]<='9') se.insert(s[i]);
		}
		int ok=1;
		if(s[0]=='0') ok=0;
		for(int i=0; i<l; i++){
			if(s[i]<'0' || s[i]>'9'){
				ok=0;
				break;
			}
		}
		if(ok==0) cout << "INVALID" << endl;
		else{
			if(se.size()==10) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
