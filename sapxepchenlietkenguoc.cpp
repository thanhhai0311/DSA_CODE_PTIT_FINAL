#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	vector<vector<int>> v1;
	for(int i=0; i<n; i++){
		int x=a[i], pos=i-1;
		while(pos>=0 && a[pos]>x){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
		vector<int> v2;
		for(int j=0; j<=i; j++){
			v2.push_back(a[j]);
		}
		v1.push_back(v2);
	}
	for(int i=v1.size()-1; i>=0; i--){
		cout << "Buoc " << i << ": ";
		for(int j=0; j<=i; j++){
			cout << v1[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
