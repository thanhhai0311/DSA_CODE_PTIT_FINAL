#include<bits/stdc++.h>

using namespace std;

int n, ok;
string s;

void khoitao(){
	s=string(n, '6');
}

void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='8'){
		s[i]='6';
		i--;
	}
	if(i==-1) ok=1;
	else s[i]='8';
}

int main(){
	vector<long long> v;
	for(int i=1; i<=9; i++){
		n=i;
		khoitao();
		ok=0;
		while(ok==0){
			string t=s;
			reverse(t.begin(), t.end());
			v.push_back(stoll(s+t));
			sinh();
		}
	}
	sort(v.begin(), v.end());
	int m;
	cin >> m;
	for(int i=0; i<m; i++){
		cout << v[i] << " ";
	}
}
