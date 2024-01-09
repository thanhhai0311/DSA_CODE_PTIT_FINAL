#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int l=s.size();
		int max=0, so=0;
		for(int i=0; i<l; i++){
			if(s[i]>='0' && s[i]<='9'){
				so=so*10+(s[i]-'0');
			}
			else{
				if(so>max) max=so;
				so=0;
			}
		}
		if(so>max) max=so;
		cout << max << endl;
	}
	return 0;
}
