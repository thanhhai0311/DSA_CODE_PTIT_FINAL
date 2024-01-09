#include<bits/stdc++.h>

using namespace std;

int n, a[100];

bool used[100];

void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==false){
			a[i]=j;
			used[j]=true;
			if(i==n){
				for(int m=1; m<=n; m++){
					cout << a[m];
				}
				cout << endl;
			}
			else{
				Try(i+1);
			}
			used[j]=false;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
}
