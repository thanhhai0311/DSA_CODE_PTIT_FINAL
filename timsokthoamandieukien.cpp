#include<bits/stdc++.h>

using namespace std;

bool ktra(int n){
	set<int> se;
	while(n>0){
		if(se.count(n%10)) return false;
		se.insert(n%10);
		n/=10;
	}
	return true;
}
vector<int> v;

void khoitao(){
	queue<int> q;
	for(int i=1; i<=5; i++){
		q.push(i);
	}
	while(1){
		int tmp=q.front();
		q.pop();
		v.push_back(tmp);
		if(tmp>=1e5) break;
		else{
			for(int i=0; i<=5; i++){
				int top=tmp*10+i;
				if(ktra(top)){
					q.push(top);
				}
			}
		}
	}
}

int main(){
	khoitao();
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		int dem=0;
		for(auto x : v){
			if(x>=l && x<=r){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
