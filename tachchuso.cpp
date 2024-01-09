#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string s;
		cin >> s;
		multiset<char> mse1;
		multiset<int> mse2;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='0' && s[i]<='9') mse2.insert(s[i]-'0');
			else mse1.insert(s[i]);
		}
		int sum=0;
		for(auto x : mse2){
			sum+=x;
		}
		for(auto x : mse1){
			cout << x;
		}
		cout << sum << endl;
	}
	return 0;
}
