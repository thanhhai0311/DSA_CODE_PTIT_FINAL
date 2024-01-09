#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << *min_element(a, a+n);
	reverse(a, a+n);
	for(auto x : a){
		cout << x << " ";
	}
}
