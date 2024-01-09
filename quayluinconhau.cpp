#include<bits/stdc++.h>

using namespace std;

int n, a[100];
bool cot[100], xuoi[100], nguoc[100];

void Try(int i){
	for(int j=1; j<=n; j++){
		if(cot[j]==0 && xuoi[n+i-j]==0 && nguoc[i+j-1]==0){
			a[i]=j;
			cot[j]=1, xuoi[n+i-j]=1, nguoc[i+j-1]=1;
			if(i==n){
				for(int k=1; k<=n; k++){
					cout << "con hau o hang " << k << " nam o cot " << a[k];
					cout << endl;
				}
				cout << endl;
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
	Try(1);
}
