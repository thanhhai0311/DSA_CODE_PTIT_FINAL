#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		if(*s.begin()!='0') cout << s << endl;
		while(next_permutation(s.begin(), s.end())){
			if(*s.begin()=='0') continue;
			else cout << s << endl;
		}
	}
	return 0;
}
