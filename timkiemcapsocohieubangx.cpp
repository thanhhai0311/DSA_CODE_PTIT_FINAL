#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int check=0;
	sort(a, a+n);
	for(int i=0; i<n; i++){
		if(binary_search(a+i+1, a+n, k+a[i])){
			check=1;
			break;
		}
	}
	if(check==1) cout << 1 ;
	else cout <<-1;
}
