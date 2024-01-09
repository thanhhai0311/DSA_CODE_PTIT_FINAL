#include<bits/stdc++.h>

using namespace std;

int cnt[1000002];

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		memset(cnt, 0, sizeof(cnt));
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			if(x>0) cnt[x]=1;
		}
		for(int j=1; j<=1000002; j++){
			if(cnt[j]==0){
				cout << j;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}
