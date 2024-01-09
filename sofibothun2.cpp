#include<bits/stdc++.h>

using namespace std;
using ll=long long;
int const mod=1e9+7;

struct matran{
	ll a[2][2];
	matran operator * (matran b){
		matran res;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				res.a[i][j]=0;
				for(int k=0; k<2; k++){
					res.a[i][j]+=a[i][k]*b.a[k][j];
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
};

matran nhan(matran a, ll n){
	if(n==1) return a;
	matran tmp=nhan(a, n/2);
	if(n%2==0) return tmp*tmp;
	else return tmp*tmp*a;
}

int main(){
	ll n;
	cin >> n;
	matran F;
	F.a[0][0]=1;
	F.a[0][1]=1;
	F.a[1][0]=1;
	F.a[1][1]=0;
	matran res=nhan(F, n);
	cout << res.a[1][0] << endl;
}
