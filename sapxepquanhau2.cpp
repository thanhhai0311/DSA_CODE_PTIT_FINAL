#include<bits/stdc++.h>

using namespace std;

int a[100][100], hau[100], n, ans;
bool cot[100], xuoi[100], nguoc[100];

void Try(int i){
	for(int j=1; j<=8; j++){
		if(cot[j]==0 && xuoi[n+i-j]==0 && nguoc[i+j-1]==0){
			hau[i]=j;
			cot[j]=1, xuoi[n+i-j]=1, nguoc[i+j-1]=1;
			if(i==n){
				int sum=0;
				for(int k=1; k<=8; k++){
					sum+=a[k][hau[k]];
				}
				ans=max(ans, sum);
			}
			else Try(i+1);
			cot[j]=0, xuoi[n+i-j]=0, nguoc[i+j-1]=0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		n=8;
		ans=0;
		memset(cot, 0, sizeof(cot));
		memset(xuoi, 0, sizeof(cot));
		memset(nguoc, 0, sizeof(cot));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << ans << endl;
	}
}
