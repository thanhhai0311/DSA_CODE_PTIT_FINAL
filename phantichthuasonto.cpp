#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=1; t<=tc; t++){
		int n;
		cin >> n;
		cout << "Test " << t << ": ";
		for(int i=2; i<=sqrt(n); i++){
			int dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if(dem>0){
				cout << i << "(" << dem << ")" <<" ";
			}
		}
		if(n>1) cout << n << "(1)";
		cout << endl;
	}
	return 0;
}
