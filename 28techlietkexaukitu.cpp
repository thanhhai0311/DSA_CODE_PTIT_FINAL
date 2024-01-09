#include<bits/stdc++.h>

using namespace std;

string s;
char c;
int k, ok;

void khoitao(){
	s=string(k, 'A');
}

void sinh(){
	int i=k-1;
	while(i>=0 && s[i]==c){
		i--;
	}
	if(i==-1) ok=1;
	else{
		s[i]++;
		for(int j=i+1; j<k; j++){
			s[j]='A';
		}
	}
}

int main(){
	cin >> c >> k;
	khoitao();
	ok=0;
	while(ok==0){
		cout << s;
		cout << endl; 
		sinh();
	}
}
