#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	int i=0, j=0, k=0;
	while(a[i]==b[j]){
		i++;
		j++;
		k++;
		if(i==a.size()) i=0;
		if(j==b.size()) j=0;
		if(k==a.size()+b.size()) break;
	}
	return a[i]>b[j];
}

int main(){
	int tc;
	cin >> tc;
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		vector<string> v;
		for(int i=0; i<n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		for(int i=0; i<n; i++){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
