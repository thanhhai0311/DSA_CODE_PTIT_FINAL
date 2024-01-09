#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		vector<int> v;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int a=n;
		while(n>0){
			sort(v.begin(), v.end());
			cout << v[n-1] << " " << v[0] << " ";
			v.erase(v.begin());
			v.erase(v.end()-1);
			n-=2;
			if(n==1){
				cout << v[0];
				n=0;
			}
		}
		cout << endl;
	}
	return 0;
}
