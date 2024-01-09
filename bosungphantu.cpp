#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin >> tc; 
	for(int t=0; t<tc; t++){
		int n;
		cin >> n;
		set<int> se;
		for(int i=0; i<n; i++){
			int s;
			cin >> s;
			se.insert(s);
		}
		int l=se.size();
		int min=INT_MAX;
		int max=INT_MIN;
		for(auto x : se){
			if(x>max) max=x;
			if(x<min) min=x;
		}
		int dem=(max-min)+1;
		cout << dem-l << endl;
	}
	return 0;
}
