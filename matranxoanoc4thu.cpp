#include<bits/stdc++.h> 

bool cmp(int a,int b){ 
	return a<b; 
} 

using namespace std; 

int main(){ 
	int n; 
	cin>>n; 
	int a[n][n]; 
	vector<int> cc; 
	for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){ 
			cin>>a[i][j]; 
			cc.push_back(a[i][j]); 
		} 
	} 
	sort(cc.begin(),cc.end(),cmp); 
	int b[n][n]; 
	int tmp=0; 
	int h1=0,h2=n-1,c1=0,c2=n-1; 
	while(h1<=h2&&c1<=c2){ 
		for(int i=c1;i<=c2;i++){ 
			b[h1][i]=cc[tmp]; 
			tmp++; 
		} 
		h1++; 
		for(int i=h1;i<=h2;i++){
			b[i][c2]=cc[tmp]; 
			tmp++; 
		} 
		c2--; 
		for(int i=c2;i>=c1;i--){ 
			b[h2][i]=cc[tmp]; 
			tmp++; 
		} 
		h2--; 
		for(int i=h2;i>=h1;i--){ 
			b[i][c1]=cc[tmp]; 
			tmp++;
			} 
		c1++; 
	} 
		for(int i=0;i<n;i++){ 
			for(int j=0;j<n;j++){ 
				cout<<b[i][j]<<" "; 
			} 
			cout<<endl; 
		}
}
