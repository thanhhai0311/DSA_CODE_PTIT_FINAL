#include<bits/stdc++.h>

using namespace std;

int n, m, a[100], b[100][100], ans=0;
bool cot[100], xuoi[100], nguoc[100];

void Try(int i){
	for(int j=1; j<=n; j++){
		if(cot[j]==0 && xuoi[n+i-j]==0 && nguoc[i+j-1]==0){
			a[i]=j;
			cot[j]=1, xuoi[n+i-j]=1, nguoc[i+j-1]=1;
			if(i==n){
				int sum=0;
				for(int k=1; k<=i; k++){
					sum+=b[k][a[k]];
				}
				ans=max(ans, sum);
			}
			else{
				Try(i+1);
			}
			cot[j]=0, xuoi[n+i-j]=0, nguoc[i+j-1]=0;
		}
	}
}

int main(){
	n=8;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> b[i][j];
		}
	}
	Try(1);
	cout << ans;
}
