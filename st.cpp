#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){
//	set<int> s;
//	s.insert(100);
//	s.insert(200);
//	s.insert(300);
//	cout << s.size() << endl;
//	cout << s.count(100) << " " << s.count(400) << endl;
//	cout << s.find(100) << " " << s.find(200) << endl;
//	s.erase(200);
//	cout << s.size() << endl;
//	for(int x : s){
//		cout << x << " " << endl;
//	}
//	s.erase(s.find(100));
//	for(int x : s){
//		cout << x << " " << endl;
//	}
//	cout << *s.begin() << endl;
//	for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
//		cout << *it << " ";
//	}
//	int n;
//	cin >> n;
//	set<int> s;
//	for(int i=0; i<n; i++){
//		int x;
//		cin >> x; 
//		s.insert(x);
//	}
//	cout << s.size() << endl;
//	multiset<int> s;
//	s.insert(100);
//	s.insert(200);
//	s.insert(100);
//	s.insert(300);
//	s.insert(200);
//	cout << s.size() << endl;
//	for(int x : s){
//		cout << x << " ";
//	}
	int n; 
	cin >> n;
	unordered_set<int> s;
	for(int i=n-1; i>=0; i--){
		s.insert(i);
	}
	for(int x : s){
		cout << x << " ";
	}
}
