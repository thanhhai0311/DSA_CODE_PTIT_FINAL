#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >>k;
	int min=INT_MAX;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		vector<int> v;
		v.push_back(stoi(s));
		while(next_permutation(s.begin(), s.end())){
			v.push_back(stoi(s));
		}
	sort(v.begin(), v.end());
	if(v[s.size()-1]-v[0]<min) min=v.end()-v.begin();
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
	}
	cout << min << endl;
}
