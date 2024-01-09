#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int kq=1;
		int a=s.size();
		for(int i=0; i<s.size(); i++){
			if(s[i]%2!=0 || s[i]!=s[a-i-1]){
				kq=0;
				break;
			}
		}
		if(kq==1) cout << "YES" << endl;
		if(kq==0) cout << "NO" << endl;
	}
	return 0;
}
