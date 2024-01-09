//#include<bits/stdc++.h>
//
//using namespace std;
//
//int a[100], n, ok;
//
//void khoitao(){
//	for(int i=1; i<=n; i++){
//		a[i]=0;
//	}
//}
//
//void sinh(){
//	int i=n;
//	while(i>=1 && a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if(i==0) ok=1;
//	else a[i]=1;
//}
//
//int main(){
//	cin >> n;
//	ok=0;
//	khoitao();
//	while(ok==0){
//		for(int i=1; i<=n; i++){
//			cout << a[i] << " ";
//		}
//		sinh();
//		cout << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int a[100], k, n, ok;
//
//void khoitao(){
//	for(int i=1; i<=k; i++){
//		a[i]=i;
//	}
//}
//
//void sinh(){
//	int i=k;
//	while(i>=1 && a[i]==n-k+i){
//		i--;
//	}
//	if(i==0) ok=1;
//	else{
//		a[i]++;
//		for(int j=i+1; j<=k; j++){
//			a[j]=a[j-1]+1;
//		}
//	}
//}
//
//int main(){
//	cin >> n >> k;
//	ok=0;
//	khoitao();
//	int dem=0;
//	while(ok==0){
//		for(int i=1; i<=k; i++){
//			cout << a[i] << " ";
//		}
//		dem++;
//		sinh();
//		cout << endl;
//	}
//	cout << dem;
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int a[100], n, ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=1;
	else{
		int j=n;
		while(j>i && a[j]<a[i]){
			j--;
		}
		swap(a[i], a[j]);
		int l=i+1;
		int r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
	}
}

int main(){
	cin >> n;
	ok=0;
	khoitao();
	while(ok==0){
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
		}
		sinh();
		cout << endl;
	}
	return 0;
}
