#include<bits/stdc++.h>

using namespace std;

int n, x;
bool cmp(int a, int b){
	return abs(x-a)<abs(x-b);
}
int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		stable_sort(a, a+n, cmp);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
