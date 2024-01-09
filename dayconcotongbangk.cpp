#include<bits/stdc++.h>

using namespace std;

int n, a[100], k, b[100];

void nhap(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
}

void Try(int i, int sum, int idx){
	for(int j=idx; j<n; j++){
		if(sum+a[j]<=k){
			b[i]=a[j];
			sum+=b[i];
			if(sum==k){
				cout << "[";
				for(int m=1; m<=i; m++){
					if(m==i) cout << b[m];
					else cout << b[m]<<" ";
				}
				cout << "]";
				cout << endl;
			}
			else{
				Try(i+1, sum, j+1);
			}
			sum-=a[j];
		}
	}
}

int main(){
//	cin >> n >> k;
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}
	nhap();
	sort(a, a+n);
	Try(1, 0, 0);
}
