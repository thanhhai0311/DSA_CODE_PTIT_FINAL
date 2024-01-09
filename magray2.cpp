#include<bits/stdc++.h>

using namespace std;

int a[100];

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		a[0]=s[0]-'0';
		for(int i=1; i<s.size(); i++){
			if(s[i]=='0') a[i]=a[i-1];
			else a[i]=1-a[i-1];
		}
		for(int i=0; i<s.size(); i++){
			cout << a[i];
		}
		cout << endl;
	}
}
