#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem=0;
		for(int i=2; i<=n; i+=2){
			if(n%i==0) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
