#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long sum=0, dem=0;
	int l=0;
	set<int> se;
	for(int r=0; r<n; r++){
		sum+=a[r];
		while(sum>s){
			sum-=a[l];
			l++;
		}
		se.insert(r-l+1);
	}
	cout << *se.rbegin() << endl;
}

//11 10
//3 1 4 1 5 3 4 1 5 2 2 
