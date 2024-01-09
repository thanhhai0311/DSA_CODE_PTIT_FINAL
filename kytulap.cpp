#include<bits/stdc++.h>

using namespace std;
int n;
string a[100];
int res=INT_MAX;
bool check[1000];

int count(string a, string b){
	int dem=0;
	for(auto x : a){
		for(auto y : b){
			if(x==y) dem++;
		}
	}
	return dem;
}

void Try(int dem, int sum, int k){
	for(int i=1; i<=n; i++){
		if(!check[i]){
			check[i]=true;
			if(dem==n) res=min(res, sum+count(a[k], a[i]));
			else if(res>sum && dem<n) Try(dem+1, sum+count(a[k], a[i]), i);
			check[i]=false;
		}
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	Try(1, 0, 0);
	cout << res << endl;
}
