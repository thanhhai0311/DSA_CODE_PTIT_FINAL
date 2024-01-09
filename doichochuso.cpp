#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int l=s.size();
		int i=l-2;
		while(i>=0 && s[i]<=s[i+1]){
			i--;
		}
		if(i==-1){
			cout << "-1" << endl;
			break;
		}
		else{
			int j=l-1;
			while(s[i]<=s[j] || (s[j]==s[j-1] && s[j] <s[i])){
				j--;
			}
			swap(s[i], s[j]);
			if(s[0]=='0'){
				cout << "-1" << endl;
				break;
			}
			cout << s << endl;
		}
	}
	return 0;
}
