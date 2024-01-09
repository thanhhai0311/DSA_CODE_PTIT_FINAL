#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	long long n;
	cin >> n;
	int dem=0;
	for(int i=0; i<10; i++){
		dem+=n/a[i];
		n%=a[i];
	}
	cout << dem << endl;
}
