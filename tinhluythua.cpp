#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long x, y, p;
		cin >> x >> y >> p;
		long long kq=1;
		for(int i=1; i<=y; i++){
			kq=(kq*x)%p;
		}
		cout << kq << endl;
	}
	return 0;
}
