#include<bits/stdc++.h>

using namespace std;

//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		int n, k;
//		cin >> n >> k;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		sort(a, a+n);
//		int dem=0;
//		for(int i=0; i<n; i++){
//			for(int j=i+1; j<n; j++){
//				if(abs(a[i]-a[j])<k) dem++;
//			}
//		}
//		cout << dem << endl;
//	}
//	return 0;
//}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n, k;
		cin >> n >>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long dem=0;
		for(int i=0; i<n; i++){
			int x=upper_bound(a+i+1, a+n, a[i]+k)-a;
			dem=dem+x-i-1;
			for(int j=x-1; j>=i; j--){
				if(a[i]+k == a[j]) dem--;
				else break;
			}
		}
		cout << dem << endl;
	}
	return 0;
}

//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		int n, k;
//		cin >> n >> k;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		sort(a, a+n);
//		int dem=0;
//		for(int i=0; i<n; i++){
//			int x=lower_bound(a+i+1, a+n, a[i]+k)-a;
//			dem=dem+x-i-1;
//		}
//		cout << dem << endl;
//	}
//	return 0;
//}
