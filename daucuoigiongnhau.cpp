#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		getline(cin, s);
		int size=s.size();
		map<char, int> mp;
		for(int i=0; i<size; i++){
			mp[s[i]]++;
		}
		int dem=0;
//		for(int i=0; i<size; i++){
//			if(mp[s[i]]>1) dem+=(mp[s[i]]*(mp[s[i]]-1)/2);
//			mp[s[i]]=0;
//		}
		for(auto x : mp){
			if(x.second>1) dem+=(x.second*(x.second-1)/2);
		}
		cout << dem+size << endl;
	}
	return 0;
}
