#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, s;
	cin >> n >> s;
	pair<long long, long long> a[n];
	for(int i=0; i<n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, [](pair<long long, long long> x, pair<long long, long long>y)->bool{
		return x.first<y.first;
	});
	int check=1;
	for(int i=0; i<n; i++){
		if(s>=a[i].first){
			s+=a[i].second;
		}
		else{
			check=0;
			break;
		}
	}
	if(check==1) cout << "YES";
	else cout << "NO";
}
