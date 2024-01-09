#include<bits/stdc++.h>

using namespace std;

string s;
int n, k, ok;

void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='0'+n){
		i--;
	}
	if(i==-1) ok=1;
	else{
		s[i]++;
		for(int j=i+1; j<n; j++){
			s[j]='1';
		}
	}
}

int main(){
	cin >> n;
	string t="";
	vector<string> hv;
	for(int i=0; i<n; i++){
		t+=char('A'+i);
	}
	hv.push_back(t);
	while(next_permutation(t.begin(), t.end())){
		hv.push_back(t);
	}
	s="";
	for(int i=0; i<n; i++){
		s+="1";
	}
	ok=0;
	vector<string> chl;
	while(ok==0){
		chl.push_back(s);
		sinh();
	}
	for(auto x : hv){
		for(auto y : chl){
			cout << x << y << endl;
		}
	}
}
