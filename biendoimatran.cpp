#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int maxhang=0;
		int maxcot=0;
		for(int i=0; i<n; i++){
			int tonghang=0;
			for(int j=0; j<n; j++){
				tonghang+=a[i][j];
				if(tonghang>maxhang) maxhang=tonghang;
			}
		}
		for(int j=0; j<n; j++){
			int tongcot=0;
			for(int i=0; i<n; i++){
				tongcot+=a[i][j];
				if(tongcot>maxcot) maxcot=tongcot;
			}
		}
		int max;
		if(maxhang>=maxcot) max=maxhang;
		else max=maxcot;
		int tong=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				tong+=a[i][j];
			}
		}
		cout << n*max-tong << endl;
	}
	return 0;
}
