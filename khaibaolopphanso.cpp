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

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
