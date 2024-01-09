#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		vector<int> v;
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
			if(s[i]=='a' || s[i]=='b' || s[i]=='c') v.push_back(2);
			if(s[i]=='d' || s[i]=='e' || s[i]=='f') v.push_back(3);
			if(s[i]=='g' || s[i]=='h' || s[i]=='i') v.push_back(4);
			if(s[i]=='j' || s[i]=='k' || s[i]=='l') v.push_back(5);
			if(s[i]=='m' || s[i]=='n' || s[i]=='o') v.push_back(6);
			if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s') v.push_back(7);
			if(s[i]=='t' || s[i]=='u' || s[i]=='v') v.push_back(8);
			if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z') v.push_back(9);
		}
		int l=v.size();
		int ok=1;
		for(int i=0; i<l/2; i++){
			if(v[i]!=v[l-1-i]){
				ok=0;
				break;
			}
		}
		if(ok==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
