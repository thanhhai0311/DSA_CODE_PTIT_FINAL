#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc; 
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int cnt[26]={0};
		for(int i=0; i<s.size(); i++){
			cnt[s[i]-'A']++;
		}
		for(int i=0; i<s.size(); i++){
			if(cnt[s[i]-'A']==1) cout << s[i];
		}
		cout << endl;
	}
}
