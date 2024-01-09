#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	public:
		string name;
		string gt;
		string birthday;
		string dc;
		string mst;
		string day;
	public:
//		friend ostream& operator << (ostream&, NhanVien);
//		friend istream& operator >> (istream&, NhanVien&);
		void nhap(){
			getline(cin, name);
			cin >> gt >> birthday;
			cin.ignore();
			getline(cin, dc);
			cin >> mst >> day;
		}
		void xuat(){
			cout << "00001" << " " << name << " " << gt << " " << " " << birthday << " " << dc << " " << mst << " " << day;
		}
};

//ostream& operator << (ostream& out, NhanVien a){
//	out << "00001" << " " << a.name << " " << a.gt << " " << a.birthday << " " << a.dc << " " << a.mst << " " << a.day;
//}
//
//istream& operator >> (istream& in, NhanVien& a){
//	getline(in, a.name);
//	in >> a.gt >> a.birthday;
//	in.ignore();
//	getline(in, a.dc);
//	in >> a.mst >> a.day;
//}

int main(){
	NhanVien a;
	a.nhap();
	a.xuat();
	return 0;
}
