#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		long long tongchan=0;
		long long tongle=0;
		for(int i=0; i<s.size(); i++){
			if(i%2==1) tongchan+=s[i]-'0';
			if(i%2==0) tongle+=s[i]-'0';
		}
		long long tong=abs(tongchan-tongle);
		if(tong%11==0) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
