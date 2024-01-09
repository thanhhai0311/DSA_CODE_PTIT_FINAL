//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int tc;
//	cin >> tc;
//	for(int t=0; t<tc; t++){
//		int n;
//		cin >> n;
//		long long a[n], b[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//			b[i]=-1;
//		}
//		sort(a, a+n);
//		for(int i=0; i<n; i++){
//			for(int j=0; j<n; j++){
//				if(a[j]==i) b[i]=a[j];
//			}
//		}
//		for(int i=0; i<n; i++){
//			cout << b[i] << " ";
//		}
//		cout << endl;
//	}	
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		long long n;
		cin >> n;
		multiset<long long> mse;
		for(long long i=0; i<n; i++){
			long long s;
			cin >> s;
			mse.insert(s);
		}
		for(long long i=0; i<n; i++){
			if(mse.count(i)>0){
				cout << i << " ";
			}
			else cout << "-1 ";
		}
		cout << endl;
	}
	return 0;
}
