#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		string a, b;
		cin >> a >> b;
		cout << abs(stoll(a)-stoll(b)) << endl;
	}
	return 0;
}
