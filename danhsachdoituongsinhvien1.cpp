#include<bits/stdc++.h>

using namespace std;

int ii=1;

class SinhVien{
	public:
		string ma, ten, lop, ns;
		float diem;
	public:
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien&);	
};

ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " ";
	if(a.ns[1]=='/') a.ns.insert(0, 1, '0');
	if(a.ns[4]=='/') a.ns.insert(3, 1, '0');
	out << a.ns << " " << fixed << setprecision(2) << a.diem;
	out << endl; 
	return out;
}

istream& operator >> (istream& in, SinhVien& a){
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.diem;
	if(ii<=9) a.ma="B20DCCN00";
	else a.ma="B20DCCN0";
	a.ma+=to_string(ii);
	ii++;
	return in;
}

int main(){
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++){
		cin >> ds[i];
	}
	for(i=0; i<N; i++){
		cout << ds[i];
	}
	return 0;
}
