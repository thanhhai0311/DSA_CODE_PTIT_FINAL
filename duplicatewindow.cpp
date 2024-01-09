#include<bits/stdc++.h>

using namespace std;

int mark[1000001];

int main(){
	int n, k;
	cin >> n >>k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int check=0;
	for(int i=0; i<=k; i++){
		if(mark[a[i]]==1){
			check=1;
			break;
		}
		mark[a[i]]=1;
	}
	for(int i=k+1; i<n; i++){
		mark[a[i-k-1]]=0;
		if(mark[a[i]]==1){
			check=1;
			break;
		}
		mark[a[i]]=1;
	}
	if(check==1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
