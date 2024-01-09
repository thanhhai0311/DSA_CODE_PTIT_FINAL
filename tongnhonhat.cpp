#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		string s1="", s2="";
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n; i++){
			if(i%2==0) s2+=char(a[i]+48);
			else s1+=(a[i]+48);
		}
		cout << stoll(s1)+stoll(s2) << endl;
	}
}
