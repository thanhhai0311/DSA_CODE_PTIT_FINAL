#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	for(int i=1; i<s.size(); i++){
		if(s[i]>=s[i-1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		cout << n << " ";
		int ok=0;
		while(next_permutation(s.begin(), s.end())){
			ok=1;
			break;	
		}	
		if(ok==0) cout << "BIGGEST" << endl;
		else cout << s << endl;
	}
}
