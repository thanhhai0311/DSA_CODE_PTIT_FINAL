#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok;

void khoitao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}	
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=1;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	cin >> n >> k;
	set<string> se;
	for(int i=1; i<=n; i++){
		string x;
		cin >> x;
		se.insert(x);
	}
	vector<string> v;
	for(auto x : se){
		v.push_back(x);
	}
	n=v.size();
	khoitao();
	ok=0;
	while(ok==0){
		for(int i=1; i<=k; i++){
			cout << v[a[i]-1] << " ";
		}
		sinh();
		cout << endl;
	}
//	for(auto xx : v){
//		cout << xx << " ";
//	}
	return 0;	
}
