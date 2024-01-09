#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int x;
			cin >> x;
			a.push_back(x);
		}
	}
	sort(a.begin(), a.end());
	int b[n][n];
	int cnt=0, h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2 && c1<=c2){
		for(int j=c1; j<=c2; j++){
			b[h1][j]=a[cnt];
			cnt++;
		}
		h1++;
		for(int i=h1; i<=h2; i++){
			b[i][c2]=a[cnt];
			cnt++;
		}
		c2--;
		if(h1<=h2){
			for(int j=c2; j>=c1; j--){
				b[h2][j]=a[cnt];
				cnt++;
			}
			h2--;
		}
		if(c1<=c2){
			for(int i=h2; i>=h1; i--){
				b[i][c1]=a[cnt];
				cnt++;
			}
			c1++;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
