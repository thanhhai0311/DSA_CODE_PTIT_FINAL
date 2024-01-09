#include<bits/stdc++.h>

using namespace std;

int n, a[100], dem=0;

bool cot[100], xuoi[100], nguoc[100];

void Try(int i){
	for(int j=1; j<=n; j++){
		if(cot[j]==0 && xuoi[n+i-j]==0 && nguoc[i+j-1]==0){
			a[i]=j;
			cot[j]=1, xuoi[n+i-j]=1, nguoc[i+j-1]=1;
			if(i==n){
				dem++;
			}
			else{
				Try(i+1);
			}
			cot[j]=0, xuoi[n+i-j]=0, nguoc[i+j-1]=0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << dem << endl;
		dem=0;
	}
}
