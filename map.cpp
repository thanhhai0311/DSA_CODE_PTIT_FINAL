#include<bits/stdc++.h>

using namespace std;

int main(){
//	map<int, int> mp;
//	mp[100]=200;
//	mp.insert({200, 300});
//	mp[300]=400;
//	cout << mp.size() << endl;
//	for(pair<int, int> x : mp){
//		cout << x.first << " " << x.second << endl;
//	}
//	for(map<int, int>::iterator it=mp.begin(); it!=mp.end(); it++){
//		cout << (*it).first << " " << (*it).second << endl;
//	}
//	cout << mp.count(400) << endl;
//	if(mp.find(100)!=mp.end()){
//		cout << "tim thay" << endl;
//	}
//	else cout << "ko tim thay" << endl;
//	int n;
//	cin >> n; 
//	map<int, int> mp;
//	int a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//		mp[a[i]]++;
//	}
//	for(int i=0; i<n; i++){
//		if(mp[a[i]]!=0) cout << a[i] << " " << mp[a[i]] << endl;
//		mp[a[i]]=0;	
//		}
	int n;
	cin >> n;
	string s[n];
	map<string, int> mp;
	for(int i=0; i<n; i++){
		cin >> s[i];
		mp[s[i]]++;
	}
	for(int i=0; i<n; i++){
		if(mp[s[i]]!=0) cout << s[i] << " " << mp[s[i]] << endl;
		mp[s[i]]=0;
	}
	return 0;
}
