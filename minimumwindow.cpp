#include<bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	int dem1[256]={0};
	int dem2[256]={0};
	int ans=INT_MAX;
	int idex=-1;
	int cnt=0;
	int l=0;
	for(int i=0; i<t.size(); i++){
		dem2[t[i]]++;
	}
	for(int r=0; r<s.size(); r++){
		dem1[s[r]]++;
		if(dem1[s[r]]<=dem2[s[r]]) cnt++;
		if(cnt==t.size()){
			while(dem1[s[l]]>dem2[s[l]] || dem2[s[l]]==0){
				if(dem1[s[l]]>dem2[s[l]]){
					dem1[s[l]]--;
				}
				l++;
			}
			if(ans>r-l+1){
				ans=r-l+1;
				idex=l;
			}
		}
	}
	if(idex==-1){
		cout << "-1" << endl;
	}
	else cout << s.substr(idex, ans) << endl;
}
// dbcddbaaccacb
// ab
