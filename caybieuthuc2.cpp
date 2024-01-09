#include<bits/stdc++.h>

using namespace std;

int tinh(int i, string a[]){
	if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/"){
		if(a[i]=="+") return tinh(2*i+1, a)+tinh(2*i+2, a);
		if(a[i]=="-") return tinh(2*i+1, a)-tinh(2*i+2, a);
		if(a[i]=="*") return tinh(2*i+1, a)*tinh(2*i+2, a);
		if(a[i]=="/") return tinh(2*i+1, a)/tinh(2*i+2, a);
	}
	else return stoll(a[i]);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << tinh(0, a) << endl;
	}
}
