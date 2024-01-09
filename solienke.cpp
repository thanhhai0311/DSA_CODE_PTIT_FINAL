#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int kq=1;
		for(int i=0; i<s.size()-1; i++){
			if(abs(s[i]-s[i+1])!=1){
				kq=0;
				break;
			}
		}	
		if(kq==1) cout << "YES" << endl;
		if(kq==0) cout << "NO" << endl;
	}
	return 0;
}
