#include<bits/stdc++.h>

using namespace std;

int k, n, a[100], ok, kq, max;

void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

//void sinh(){
//	int i=n;
//	while(i>=1 && a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if(i==0) ok=0;
//	else a[i]=1;
//}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}

//int toiuu(){
//	int tl[n];
//	int gtsd[n];
//	for(int i=1; i<=n; i++){
//		cin >> tl[i] >> gtsd[i];
//	}
//	int gtsdtu=0;
//	for(int i=1; i<=n; i++){
//		gtsdtu+=gtsd[i]*a[i];
//	}
//	int max=0;
//	if(gtsdtu>max) max=gtsdtu;
//	return max;
//}
//int ktra(){
//	int dem=0;
//	for(int i=1; i<=n; i++){
//		if(a[i]==1) dem++;
//	}
//	return dem;
//}
	
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
 		ok=1;
 		int max=0;
		while(ok==1){
//			if(ktra()==k){
				for(int i=1; i<=n; i++){
					if(a[i]==0) cout << "A";
					else cout << "B";
				}
				cout << " ";
//			}
			//toiuu();
			sinh();
		}
		cout << endl;
	}
	//	cout << max;
	return 0;
}
