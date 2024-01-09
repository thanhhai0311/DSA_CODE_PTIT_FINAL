#include<bits/stdc++.h>

using namespace std;

class PhanSo{
	public:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		void rutgon();
		friend ostream& operator << (ostream&, PhanSo);
		friend istream& operator >> (istream&, PhanSo&);
		friend PhanSo operator + (PhanSo, PhanSo);
};

PhanSo::PhanSo(long long tu, long long mau){
	this->tu=tu;
	this->mau=mau;
}

void PhanSo::rutgon(){
	long long ucln=__gcd(tu, mau);
	tu/=ucln;
	mau/=ucln;
}

ostream& operator << (ostream& out, PhanSo p){
	out << p.tu << "/" << p.mau;
	return out;
}

istream& operator >> (istream& in, PhanSo& p){
	in >> p.tu >> p.mau;
	return in;
}

PhanSo operator + (PhanSo p, PhanSo q){
	PhanSo tong(1,1);
	tong.tu=((p.tu)*(q.mau))+((p.mau)*(q.tu));
	tong.mau=(p.mau)*(q.mau);
	tong.rutgon();
	return tong;
}

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p+q;
	return 0;
}
