#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int const mod=1e9+7;

struct matran{
	ll a[10][10];
	ll n;
	matran operator * (matran b){
		matran res;
		res.n=n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res.a[i][j]=0;
				for(int k=0; k<n; k++){
					res.a[i][j]+=a[i][k]*b.a[k][j];
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
};

matran lt(matran a, ll k){
	if(k==1) return a;
	matran tmp=lt(a, k/2);
	if(k%2==0) return tmp*tmp;
	else return tmp*tmp*a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		matran F;
		F.n=n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> F.a[i][j];
			}
		}
		matran res;
		res=lt(F, k);
		ll sum=0;
		for(int i=0; i<n; i++){
			sum+=res.a[i][n-1];
			sum%=mod;
		}
		cout << sum << endl;
	}
}
