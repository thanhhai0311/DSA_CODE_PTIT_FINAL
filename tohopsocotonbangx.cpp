#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100];
vector<string> v;

void Try(int x, int sum, string s){
	for(int i=x; i<=n; i++){
		if(sum==k){
			s.pop_back();
			v.push_back("{"+s+"}");
			return;
		}
		else if(sum<k) Try(i, sum+a[i], s+to_string(a[i])+" ");
		else return;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		v.clear();
		Try(1, 0, "");
		if(v.size()==0) cout << "-1" << endl;
		else{
			cout << v.size() << " ";
			for(auto x : v){
				cout << x << " ";
			}
			cout << endl;
		}
	}
}
