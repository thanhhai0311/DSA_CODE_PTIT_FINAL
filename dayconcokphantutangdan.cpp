#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		string s=string(k, '0')+string(n-k, '1');
		sort(a, a+n);
		for(int i=0; i<n; i++){
			if(s[i]=='0') cout << a[i] << " ";
		}
		cout << endl;
		while(next_permutation(s.begin(), s.end())){
			for(int i=0; i<n; i++){
				if(s[i]=='0') cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}
