#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int n=s.size();
		int i=n-1;
		int ok=0;
		while(s[i]=='1'){
			s[i]='0';
			i--;
		}
		if(i<0) ok=1;
		else s[i]='1';
		for(int j=0; j<n; j++){
			cout << s[j];
		}
		cout << endl;
	}
}
