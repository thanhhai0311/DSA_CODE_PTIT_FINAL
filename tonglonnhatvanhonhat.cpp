#include<bits/stdc++.h>

using namespace std;

void max(string a, string b){
	for(int i=0; i<a.size(); i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0; i<b.size(); i++){
		if(b[i]=='5') b[i]='6';
	}
	cout << stoll(a) + stoll(b);
}

void min(string a, string b){
	for(int i=0; i<a.size(); i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0; i<b.size(); i++){
		if(b[i]=='6') b[i]='5';
	}
	cout << stoll(a) + stoll(b);
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string a, b;
		cin >> a >> b;
		min(a, b);
		cout << " ";
		max(a, b);
		cout << endl;
	}
	return 0;
}
