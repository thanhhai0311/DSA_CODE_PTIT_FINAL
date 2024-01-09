#include<bits/stdc++.h>

using namespace std;

int n, k, sum=0, a[100], ok=0;

void Try(int i, int pos, int tong, int dem){
	if(dem==k){
		ok=true;
		return ;
	}
	else{
		for(int j=pos; j<=n; j++){
			tong+=a[j];
			if(tong==sum){
				Try(i+1, j+1, 0, dem+1);
			}
			else if(tong<sum){
				Try(i+1, j+1, tong, dem);
			}
		}
	}
}

void nhap(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		sum+=a[i];
	}
//	sort(a+1, a+n+1);
	if(sum%k!=0){
		cout << "0" << endl;
		return ;
	}
	else{
		sum=sum/k;
	}
	Try(1, 1, 0, 0);
	cout << ok << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
	}
}
