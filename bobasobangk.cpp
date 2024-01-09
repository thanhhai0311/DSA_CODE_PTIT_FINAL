//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n, k;
//		cin >> n >> k;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		sort(a, a+n);
//		int ok=0;
//		for(int i=0; i<n; i++){
//			for(int j=i+1; j<n; j++){
//				if (lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a != upper_bound(a + j + 1, a + n, k - a[i] - a[j]) - a){		
//					ok=1;
//					break;
//				}
//			}
//		}
//		if(ok==0) cout << "NO" << endl;
//		else cout << "YES" << endl;
//	}
//	return 0;
//}



#include<bits/stdc++.h>

using namespace std;

string ktra(long long a[], int n, int k) {
	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			if (lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a != upper_bound(a + j + 1, a + n, k - a[i] - a[j]) - a)
				return "YES\n";
	return "NO\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		long long a[100000];
		for (int i = 0; i < n; i++)cin >> a[i];
		sort(a, a + n);
		cout << ktra(a, n, k);
	}
}
