//#include<bits/stdc++.h>
//
//using namespace std;
//
//int check(char x){
//	if(x!='a' && x!='e' && x!= 'i' && x!='o'&& x!='u' && x!='y') return 1;
//	return 0;
//}
//
//int main(){
//	string s;
//	cin >> s;
//	int l=s.size();
//	vector<char> v;
//	for(int i=0; i<l; i++){
//		s[i]=tolower(s[i]);
//		v.push_back(s[i]);
//	}
//	for(auto x : v){
//		if(check(x)==1) cout << "." << x;
//	}
// 	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int l=s.size();
	for(int i=0; i<l; i++){
		s[i]=tolower(s[i]);
	}
	for(int i=0; i<l; i++){
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') cout << "." << s[i];
 	}
 	return 0;
}
