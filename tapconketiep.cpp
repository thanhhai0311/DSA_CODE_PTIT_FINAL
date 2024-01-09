#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		int a[k];
		for(int j=1; j<=k; j++){
			cin >> a[j];
		}
		int i=k;
		int ok=0;
		while(a[i]==n-k+i && i>0){
			i--;
		}
		if(i==0) ok=1;
		else{
			a[i]++;
			for(int j=i+1; j<=k; j++){
				a[j]=a[j-1]+1;
			}
		}
		if(ok==1){
			for(int j=1; j<=k; j++){
				a[j]=j;
				cout << a[j] << " ";
			}
		}
		else{
			for(int j=1; j<=k; j++){
				cout << a[j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
