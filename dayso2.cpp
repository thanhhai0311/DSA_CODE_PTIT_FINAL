#include<bits/stdc++.h>

using namespace std;

int n, a[100];
vector<vector<int>> v;

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void Try(int i){
	if(i>0){
		vector<int> v1;
		for(int j=1; j<=i; j++){
			v1.push_back(a[j]);
		}
		v.push_back(v1);
		for(int j=1; j<i; j++){
			a[j]=a[j]+a[j+1];
		}
		Try(i-1);
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(n);
		for(int i=v.size()-1; i>=0; i--){
			cout << "[";
			for(int j=0; j<v[i].size()-1; j++){
				cout << v[i][j] << " ";
			}
			cout << v[i][v[i].size()-1] << "]";
			cout << " ";
			v[i].clear();
		}
		cout << endl;
		v.clear();
	}
}
