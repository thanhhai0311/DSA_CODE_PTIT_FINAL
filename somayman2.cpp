#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int tong=0;
		for(int i=0; i<s.size(); i++){
			tong+=s[i]-'0';
		}
		while(tong>9){
			int tmp=tong, tongcs=0;
			while(tmp>0){
				tongcs+=tmp%10;
				tmp/=10;
			}
			tong=tongcs;
		}
		if(tong==9) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
