//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	set<int> se;
//	for(int i=0; i<n; i++){
//		int x;
//		cin >> x;
//		se.insert(x);
//	}
//	int t;
//	cin >> t;
//	for(int i=0; i<t; t++){
//		int a;
//		cin >> a;
//		if(se.find(a) != se.end()) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		map<int, int> mp;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		set<int> se;
		for(auto x : mp){
			se.insert(x.second);
		}
		if(se.size()==1) cout << "YES" << endl;
		else if(se.size()==2){
			vector<int> v;
			for(auto x : se){
				v.push_back(x);
			}
			if(abs(v[0]-v[1])==1) cout << "YES" << endl;
			else cout << "NO" << endl;
		} 
		else cout << "NO" << endl;
	}
	return 0;
}
