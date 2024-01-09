#include<bits/stdc++.h>

using namespace std;

int cnt[5];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			if(b[i]<=4){
				cnt[b[i]]++;
			}
		}
		sort(b, b+m);
		long long dem=0;
		for(int i=0; i<n; i++){
			if(a[i]==0) continue;
			else if(a[i]==1) dem+=cnt[0];
			else{
				dem=dem+cnt[0]+cnt[1];
				auto it=upper_bound(b, b+m, a[i]);
				dem+=distance(it, b+m);
				if(a[i]==2) dem-=(cnt[3]+cnt[4]);
				if(a[i]==3) dem+=cnt[2];
			}
		}
		cout << dem << endl;
		memset(cnt, 0, sizeof(cnt));
	}
	return 0;
}

//x<y => x^y>y^x
//x=2 y=3
//x=2 y=4
