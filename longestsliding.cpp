#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int dem[256]={0};
	int l=0;
	int cnt=0;
	int ans=INT_MIN;
	for(int r=0; r<s.size(); r++){
		dem[s[r]]++;
		while(dem[s[r]]>1){
			ans=max(ans, r-l);
			dem[s[l]]--;
			l++;
		}
	}
	cout << ans;
}

//dabacdadbbdd
