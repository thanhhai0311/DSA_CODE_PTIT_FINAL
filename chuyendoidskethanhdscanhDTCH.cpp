#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> Ke[n+1];
	cin.ignore();
	for(int i=1; i<=n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			int x=stoi(tmp);
			Ke[i].push_back(x);
		}
	}
	for(int i=1; i<=n; i++){
		sort(Ke[i].begin(), Ke[i].end());
		for(auto x : Ke[i]){
			cout << i << " " << x;
			cout << endl;
		}
		//cout << endl;
	}
}
