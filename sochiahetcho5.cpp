#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		long long tong=0;
		long long tmp=1;
		for(int i=s.size()-1; i>=0; i--){
			tong+=(s[i]-'0')*tmp;
			tmp*=2;
			tmp%=10;
			tong%=10;
		}
		if(tong%5==0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
