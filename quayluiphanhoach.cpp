//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, a[100], dem, ok;
//
//void khoitao(){
//	dem=1;
//	a[dem]=n;
//}
//
//void sinh(){
//	int i=dem;
//	while(i>0 && a[i]==1){
//		i--;
//	}
//	if(i==0) ok=1;
//	else{
//		a[i]--;
//		int tmp=dem-i+1;
//		dem=i;
//		int q=tmp/a[i], r=tmp%a[i];
//		for(int j=0; j<q; j++){
//			a[++dem]=a[i];
//		}
//		if(r!=0) a[++dem]=r;
//	}
//}
//
//int main(){
//	cin >> n;
//	khoitao();
//	ok=0;
//	while(ok==0){
//		for(int i=1; i<=dem; i++){
//			cout << a[i] << " ";
//		}
//		cout << endl;
//		sinh();
//	}
//	return 0;
//}



#include<bits/stdc++.h>

using namespace std;

int n, X[100];

void Try(int i, int sum){
	for(int j=X[i-1]; j>=1; j--){
		if(sum+j<=n){
			X[i]=j;
			sum+=j;
			if(sum==n){
				for(int k=1; k<=i; k++){
					cout << X[k] << " ";
				}
				cout << endl;
			}
			else{
				Try(i+1, sum);
			}
			sum-=X[i];
		}
	}
}

int main(){
	cin >> n; 
	X[0]=n;
	Try(1, 0);
}
