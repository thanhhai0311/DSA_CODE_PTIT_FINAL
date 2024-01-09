#include<bits/stdc++.h>

using namespace std;

int cnt[1000002];

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int x; 
		cin >> x;
		if(x>0) cnt[x]=1;
	}
	for(int i=0; i<n; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
