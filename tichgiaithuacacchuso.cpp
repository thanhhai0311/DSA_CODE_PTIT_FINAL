/*
1!
2!
3!
4!=2!*2!*3!
5!
6!=6*5!=3!*5!
7!
8!=8*7!=2!*2!*2!*7!
9!=9*8*7!=3!*3!*2!*7!
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string kq="";
		for(int i=0; i<s.size(); i++){
			if(s[i]=='4') kq+="322";
			else if(s[i]=='6') kq+="35";
			else if(s[i]=='8') kq+="2227";
			else if(s[i]=='9') kq+="3327";
			else if(s[i]!='0' && s[i]!='1') kq+=s[i];
		}
//		for(char x : s){
//			if(x=='4') kq+="322";
//			else if(x=='6') kq+="35";
//			else if(x=='8') kq+="2227";
//			else if(x=='9') kq+="3327";
//			else if(x!='0' && x!='1') kq+=x;
//		}
		vector<int> v;
		for(auto xx : kq){
			v.push_back(xx-'0');
		}
		sort(v.begin(), v.end());
		for(int i=v.size()-1; i>=0; i--){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}

