#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		cin.ignore();
		string s;
		getline(cin, s);
		int k;cin>>k;
		set<char> se;
		for( char x : s){
			se.insert(x);
		}
		if( se.size()>=26-k){
			cout<<"1"<<endl;
		} else cout<<"0"<<endl;
	}
}
