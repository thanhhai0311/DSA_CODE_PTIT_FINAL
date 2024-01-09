#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		int l=s.size();
		multiset<int> se;
		for(int i=0; i<l; i++){
			if(s[i]>='0' && s[i]<='9') se.insert(s[i]-'0');
		}
		int sum=0;
		for(auto x : se){
			sum+=x;
		}
		cout << sum << endl;
	}
	return 0;
}
