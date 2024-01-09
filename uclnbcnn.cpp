//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int a, b;
//		cin >> a >> b;
//		//gia su a<b
//		int c=a, d=b;
//		int ucln, bcnn;
//		while(a>0){
//			int tmp=b%a;
//			b=a;
//			a=tmp;
//		}
//		ucln=b;
//		bcnn=(c*d)/ucln;
//		cout << ucln << " " << bcnn << endl;
//		return 0;
//	}
//}


#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int l=0, r=n-1;
		int ok=1;
		while(l<r){
			if(a[l]!=a[r]){
				cout << "NO" << endl;
				ok=0;
				break;
			}
		}
		if(ok==1) cout << "YES" << endl;
	}
	return 0;
}
