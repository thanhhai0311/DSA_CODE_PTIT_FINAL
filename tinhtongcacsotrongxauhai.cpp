#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int l=s.size();
		int so=0, sum=0;
		for(int i=0; i<l; i++){
			if(s[i]>='0' && s[i]<='9'){
				so=so*10+(s[i]-'0');
			}
			else{
				sum+=so;
				so=0;
			}
		}
		sum+=so;
		cout << sum << endl;
	}
	return 0;
}
