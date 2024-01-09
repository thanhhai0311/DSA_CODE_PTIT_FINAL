#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=1; t<=tc; t++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s1=s;
		int ok=0;
		while(next_permutation(s.begin(), s.end())){
			ok=1;
			break;
		}
		next_permutation(s1.begin(), s1.end());
		if(ok==0) cout << t << " " << "BIGGEST";
		else cout << t << " " << s1;
		cout << endl;
	}
}
