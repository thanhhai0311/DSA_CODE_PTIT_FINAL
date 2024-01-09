#include<bits/stdc++.h>

using namespace std;

int n, p, s;
vector<string> v;
vector<int> a;

bool nt(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

void Try(int i, string f, int sum, int dem){
	for(int j=i; j<a.size(); j++){
		if(sum==s && dem==n){
			v.push_back(f);
			return;
		}
		else if(sum<s && dem<n) Try(j+1, f+to_string(a[j])+" ", sum+a[j], dem+1);
		else return;
	}
}

int main(){
	for(int i=2; i<=200; i++){
		if(nt(i)) a.push_back(i);
	}
	int t;
	cin >> t;
	while(t--){
		cin >> n >> p >> s;
		v.clear();
		int b=upper_bound(a.begin(), a.end(), p)-a.begin();
		Try(b, "", 0, 0);
		cout << v.size() << endl;
		for(auto x : v){
			cout << x << endl;
		}
	}
}
