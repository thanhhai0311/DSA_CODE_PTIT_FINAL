#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int n;
		cin >> s >> n;
		string tmp=string(s.size()-n, '0')+string(n, '1');
		set<string> se;
		do{
			string res="";
			for(int i=0; i<tmp.size(); i++){
				if(tmp[i]=='1'){
					res+=s[i];
				}
			}
			se.insert(res);
		}
		while(next_permutation(tmp.begin(), tmp.end()));
		for(auto x : se){
			cout << x << endl;
		}
	}
}
