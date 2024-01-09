#include<bits/stdc++.h>

using namespace std;

bool check(string s, int n){
	if(n<=3) return false;
	else{
		for(int i=0; i<s.size()-1; i++){
			if(abs(s[i]-s[i+1])==1) return false;
		}
		return true;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s="";
		for(int i=1; i<=n; i++){
			s+=char(i+48);
		}
		if(check(s, n)) cout << s << endl;
		while(next_permutation(s.begin(), s.end())){
			if(check(s, n)) cout << s << endl;
		}
		cout << endl;
	}
}
