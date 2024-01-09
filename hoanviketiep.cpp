#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		int i=n-1;
		int ok=0;
		while(i>1 && a[i]>a[i+1]){
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
		if(ok==1){
			for(int q=1; q<=n; q++){
				a[q]=q;
				cout << a[q] << " ";
			}
			cout << endl;
		}
		else{
			for(int q=1; q<=n; q++){
				cout << a[q] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
