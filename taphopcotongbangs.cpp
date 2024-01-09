#include<bits/stdc++.h>

using namespace std;

int n, k, s, cnt=0, a[100];

void Try(int i, int dem, int sum){
	for(int j=a[i-1]+1; j<=n; j++){
		a[i]=j;
		sum+=j;
		dem++;
		if(dem==k && sum==s){
			cnt++;
		}
		else if(dem<k && sum<s){
			Try(i+1, dem, sum);
		}
		dem--;
		sum-=a[i];
	}
}

int main(){
	cin >> n >> k >> s;
	Try(1, 0, 0);
	cout << cnt << endl;
	return 0;
}
