#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int b[k];
	multiset<int> se;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	for(int i=0; i<k; i++){
		cin >> b[i];
	}
	for(int i=0; i<k; i++){
		auto it=upper_bound(se.begin(), se.end(), b[i]);
		if(it!=se.begin()){
			it--;
			cout << *it << endl;
			se.erase(it);
		}
		else{
			if(*it==b[i]){
				cout << *it << endl;
				se.erase(it);
			}
			else cout << "-1" << endl;
		}
	}
}
