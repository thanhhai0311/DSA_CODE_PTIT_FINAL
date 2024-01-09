#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long a, x, y;
		cin >> a >> x >> y;
		long long lll=__gcd(x, y);
		for(int i=1; i<=lll; i++){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
