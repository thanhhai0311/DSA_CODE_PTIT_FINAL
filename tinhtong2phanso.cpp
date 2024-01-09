#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(struct PhanSo &p){
	cin >> p.tu >> p.mau;
}

void rutgon(struct PhanSo &p){
	long long uc=__gcd(p.tu, p.mau);
	p.tu/=uc;
	p.mau/=uc;
}

PhanSo tong(struct PhanSo &p, struct PhanSo &q){
	PhanSo kq;
	kq.tu=((p.tu)*(q.mau)+(q.tu)*(p.mau));
	kq.mau=(p.mau)*(q.mau);
	rutgon(kq);
	return kq;
}

void in(struct PhanSo &p){
	cout << p.tu << "/" << p.mau;
}

int main(){
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t=tong(p, q);
	in(t);
	return 0;
}
