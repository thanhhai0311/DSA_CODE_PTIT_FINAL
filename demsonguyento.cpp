#include<bits/stdc++.h>

using namespace std;

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long L, R;
		cin >> L >> R;
		int dem=0;
		for(int i=L; i<=R; i++){
			if(nto(i)==1) dem++;
		}
		cout << dem << endl;
	}
}
