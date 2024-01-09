#include<bits/stdc++.h>

using namespace std;

int a[100], n, k, ok;

vector<vector<int>> v1;

void khoitao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=1;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	cin >> n >> k;
	ok=0;
	khoitao();
	while(ok==0){
		vector<int> v2;
		for(int i=1; i<=k; i++){
			v2.push_back(a[i]);
		}
		v1.push_back(v2);
		sinh();
	}
	int b[k];
	for(int i=0; i<k; i++){
		cin >> b[i];
	}
	int dem=0;
	for(int i=v1.size()-1; i>=0; i--){
		dem++;
		int check=1;
		for(int j=0; j<k; j++){
			if(v1[i][j]!=b[j]){
				check=0;
				break;
			}
		}
		if(check==1){
			cout << dem << endl;
			break;
		}
	}
}
