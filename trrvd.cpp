#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
	int ktra=0;
	int i=n; 
	while(i==1 && i>0){
		i--;
	}
	if(i==0) ktra=1;
	else{
		for(int i=1; i<=n; i++){
			a[i]=0;
		}
	}
	if(ktra==0){
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
		}
	}
	return 0;
}
