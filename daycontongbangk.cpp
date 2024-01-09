#include<bits/stdc++.h>

using namespace std;
bool check;

int n, k, a[100], b[100];
vector<vector<int>> v;

void nhap(){
	cin >> n >> k;
	check=false;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
}

void Try(int i, int idex, int sum){
	for(int j=idex; j<=n; j++){
		if(sum+a[j]<=k){
			b[i]=a[j];
			sum+=a[j];
			if(sum==k){
				cout << "[";
				for(int m=1; m<=i; m++){
					if(m==i) cout << b[m];
					else cout << b[m]<<" ";
				}
				cout << "]";
				cout << " ";
				check=true;
			}
			else Try(i+1, j+1, sum);
			sum-=a[j];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(1, 1, 0);
		if(check==false) cout << "-1";
		cout << endl;
	}
}
