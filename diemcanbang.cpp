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
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//		}
//		int sum=0;
//		for(int i=0; i<n; i++){
//			sum+=a[i];
//		}
//		int ok=0;
//		for(int j=1; j<n; j++){
//			int tongtrai=0, tongphai=0;
//			for(int i=0; i<j; i++){
//				tongtrai+=a[i];
//			}
//			tongphai=sum-tongtrai-a[j];
//			if(tongtrai==tongphai){
//				cout << j+1 << endl;
//				ok=1;
//			}
//			if(ok==1) break;
//		}
//		if(ok==0) cout << "-1" << endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum+=a[i];
		}
		int tongmotphia=0;
		int ok=0;
		for(int i=0; i<n; i++){
			if(tongmotphia*2==sum-a[i]){
				cout << i+1 << endl;
				ok=1;
				break;
			}
			else tongmotphia+=a[i];
		}
		if(ok==0) cout << "-1" << endl;
	}
	return 0;
}
