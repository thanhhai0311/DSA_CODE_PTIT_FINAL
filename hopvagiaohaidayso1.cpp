#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int a, b;
		cin >> a >> b;
		set<int> s1;
		set<int> s2;
		set<int> s3;
		set<int> s4;
		for(int i=0; i<a; i++){
			int x;
			cin >> x;
			s1.insert(x);
			s3.insert(x);
		}
		for(int i=0; i<b; i++){
			int xx;
			cin >> xx;
			s2.insert(xx);
			s3.insert(xx);
			if(s1.count(xx)!=0) s4.insert(xx);
		}
		for(auto x : s3){
			cout << x << " ";
		}
		cout << endl;
		for(auto x : s4){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
