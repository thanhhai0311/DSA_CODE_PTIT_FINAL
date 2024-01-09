#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n-1; i++){
			if(a[i+1]!=0 && a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		vector<int> v;
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				v.push_back(a[i]);
			}
		}
		int l=v.size();
		for(auto x : v){
			cout << x << " ";
		}
		for(int i=1; i<=n-l; i++){
			cout << "0" << " ";
		}
		cout << endl;
	}	
	return 0;
}
