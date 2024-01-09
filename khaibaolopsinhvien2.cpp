#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	public:
		string name;
		string lop;
		string birthday;
		float score;
	public:
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien&);
};

ostream& operator << (ostream& out, SinhVien a){
	out << "B20DCCN001" << " " << a.name << " " << a.lop << " ";
	if(a.birthday[1]=='/') a.birthday.insert(0, 1, '0');
	if(a.birthday[4]=='/') a.birthday.insert(3, 1, '0');
	out << a.birthday << " ";
	out << fixed << setprecision(2) << a.score;
	return out;
}

istream& operator >> (istream& in, SinhVien& a){
	getline(in, a.name);
	in >> a.lop >> a.birthday >> a.score;
	return in;
}

int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}

