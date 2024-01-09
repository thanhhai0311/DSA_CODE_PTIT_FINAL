//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, a[100], x[100];
//vector<string> v;
//
//void nhap(){
//	cin >> n;
//	for(int i=1; i<=n; i++){
//		cin >> a[i];
//	}
//}
//
//void Try(int i, int idex){
//	for(int j=idex; j<=n; j++){
//		if(a[j]>x[i-1]){
//			x[i]=a[j];
//			if(i>=2){
//				string res="";
//				for(int k=1; k<=i; k++){
//					res+=to_string(x[k])+" ";
//				}
//				v.push_back(res);
//			}
//			//else{
//				Try(i+1, j+1);
//			//}
//		}
//	}
//}
//
//int main(){
//	nhap();
//	Try(1, 1);
//	sort(v.begin(), v.end());
//	for(auto x : v) cout << x << endl;
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int n, a[100], x[100];
vector<string> v;

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void Try(int i, int pos){
	for(int j=pos; j<=n; j++){
		if(a[j]>x[i-1]){
			x[i]=a[j];
			if(i>=2){
				string res="";
				for(int k=1; k<=i; k++){
					res+=to_string(x[k])+" ";
				}
				v.push_back(res);
			}
			Try(i+1, j+1);
		}
	}
}

int main(){
	nhap();
	Try(1, 1);
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
}
