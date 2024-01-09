#include<bits/stdc++.h>

using namespace std;

int n, ok;

string s;

void khoitao(){
	s=string(n, '0');
	s[n-1]='8';
}

void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='8'){
		s[i]='0';
		i--;
	}
	if(i==-1) ok=1;
	else s[i]='8';
}

int main(){
	vector<long long> v;
	n=19;
	ok=0;
	khoitao();
	while(ok==0){
		v.push_back(stoll(s));
		sinh();
	}
	long long res[301];
	for(int i=1; i<=300; i++){
		for(auto x : v){
			if(x%i==0){
				res[i]=x;
				break;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int m;
		cin >> m;
		cout << res[m] << endl;
	}
}
