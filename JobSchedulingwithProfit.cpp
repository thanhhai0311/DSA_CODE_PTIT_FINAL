#include<bits/stdc++.h>

using namespace std;

struct job{
	long long id, dead, pro;
};

int main(){
	int n;
	cin >> n;
	job a[n];
	for(int i=0; i<n; i++){
		cin >> a[i].id >> a[i].dead >> a[i].pro;
	}
	sort(a, a+n, [](job x, job y)->bool{
		return x.pro>y.pro;
	});
	long long ans=0;
	int used[n]={0};
	for(int i=0; i<n; i++){
		for(int j=a[i].dead-1; j>=0; j--){
			if(used[j]==0){
				ans+=a[i].pro;
				used[j]=1;
				break;
			}
		}
	}
	cout << ans << endl;
}
