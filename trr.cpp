#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int dem=0;
	for(int i=1; i<=n; i++){
		if(i%3!=0 && i%4!=0 && i%7!=0) dem++;
	}
	cout << dem;
}
