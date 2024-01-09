#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> se;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	vector<int> v(se.begin(), se.end());
	sort(v.begin(), v.end(), greater<int>());
	for(auto x :v){
		cout << x << " ";
	}
	cout << endl;
	while(prev_permutation(v.begin(), v.end())){
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
