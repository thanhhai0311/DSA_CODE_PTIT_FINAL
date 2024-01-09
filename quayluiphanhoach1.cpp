#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok;

void Try(int i, int sum){
	for(int j=a[i-1]; j>=1; j--){
		if(sum+j<=n){
			a[i]=j;
			sum+=j;
			if(sum==n){
				for(int k=1; k<=i; k++){
					cout << a[k] << " ";
				}
				cout << endl;
			}
			else{
				Try(i+1, sum);
			}
			sum-=a[i];
		}
	}
}

int main(){
	cin >> n;
	a[0]=n;
	Try(1, 0);
}
