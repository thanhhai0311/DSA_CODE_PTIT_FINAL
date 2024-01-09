#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
//	long long a=p.tu;
//	long long b=p.mau;
//	long long ucln;
//	while(a!=b){
//		if(a>b) a=a-b;
//		if(a<b) b=b-a;
//	}
//	ucln=a;
	long long a=__gcd(p.tu, p.mau);
	p.tu/=a;
	p.mau/=a;
}

void in(PhanSo &p){
	cout << p.tu << "/" << p.mau;
}

int main(){
	PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
