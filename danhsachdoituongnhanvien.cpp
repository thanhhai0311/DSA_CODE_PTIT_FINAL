#include<bits/stdc++.h>

using namespace std;

int ii=1;

class NhanVien{
	public:
		string ma, ten, gt, ns, dc, mst, nhd;
	public:
		friend ostream& operator << (ostream&, NhanVien);
		friend istream& operator >> (istream&, NhanVien&);
};

ostream& operator << (ostream& out, NhanVien a){
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nhd <<endl;
	return out;
}

istream& operator >> (istream& in, NhanVien& a){
	//cin.ignore();
	scanf("\n");
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	//cin.ignore();
	scanf("\n");
	getline(in, a.dc);
	in >> a.mst >> a.nhd;
	if(ii<=9) a.ma="0000";
	else a.ma="000";
	a.ma+=to_string(ii);
	ii++;
	return in;
}

int main(){
	NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++) cin >> ds[i];
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
