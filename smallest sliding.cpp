#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char> se;
	for(int i=0; i<s.size(); i++){
		se.insert(s[i]);
	}
	int n=se.size();
	int l=0;
	int ans=INT_MAX;
	int dem[256]={0};
	int cnt=0;
	for(int r=0; r<s.size(); r++){
		dem[s[r]]++;
		if(dem[s[r]]==1) cnt++;
		if(cnt==n){
			while(dem[s[l]]>1){
				dem[s[l]]--;
				l++;
			}
			ans=min(ans, r-l+1);
		}
	}
	cout << ans << " "; 
	
}
//bcceedeeaedda
