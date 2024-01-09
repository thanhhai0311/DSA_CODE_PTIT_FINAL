#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int h1=0, h2=n-1, c1=0, c2=m-1;
		while(h1<=h2 && c1<=c2){
			for(int j=c1; j<=c2; j++){
				cout << a[h1][j] << " ";
			}
			h1++;
			for(int i=h1; i<=h2; i++){
				cout << a[i][c2]<< " ";
			}
			c2--;
			if(h1<=h2){
				for(int j=c2; j>=c1; j--){
					cout << a[h2][j] << " ";
				}
				h2--;
			}
			if(c1<=c2){
				for(int i=h2; i>=h1; i--){
					cout << a[i][c1]<< " ";
				}
				c1++;
			}
		}
		cout << endl;
	}
	return 0;
}
