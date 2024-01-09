#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m;
		cin >> n >> s >> m;
		if(n<m || 6*n<7*m){
			cout << "-1" << endl;
		}
		else{
			int tmp=m*s;
			if(tmp%n==0) cout << tmp/n << endl;
			else cout << (tmp/n)+1 << endl;
		}
	}
}
