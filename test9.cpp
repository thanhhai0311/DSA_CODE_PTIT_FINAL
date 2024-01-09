#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll merge(ll a[], int l, int m, int r){
	vector<int> v1(a+l, a+m+1);
	vector<int> v2(a+m+1, a+r+1);
	ll ans=0;
	int i=0, j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i]<=v2[j]){
			a[l++]=v1[i++];
		}
		if(v1[i]>v2[j]){
			ans+=v1.size()-i;
			a[l++]=v2[j++];
		}
	}
	while(i<v1.size()) a[l++]=v1[i++];
	while(j<v2.size()) a[l++]=v2[j++];
	return ans;
}

ll mergeSort(ll a[], int l, int r){
	if(l>=r) return 0;
	else{
		int m=(l+r)/2;
		ll ans=0;
		ans+=mergeSort(a, l, m);
		ans+=mergeSort(a, m+1, r);
		ans+=merge(a, l, m, r);
		return ans;
	}
}

int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << mergeSort(a, 0, n-1) << endl;
}
