#include<bits/stdc++.h>

using namespace std;

int ii=1;

class NhanVien{
	public:
		string ma, ten, gt, ns, dc, mst, nhd;
		long long ngay, thang, nam;
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

bool cmp(NhanVien a, NhanVien b){
	a.ngay=(a.ns[3]-'0')*10+(a.ns[4]-'0');
	a.thang=(a.ns[0]-'0')*10+(a.ns[1]-'0');
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
	b.ngay=(b.ns[3]-'0')*10+(b.ns[4]-'0');
	b.thang=(b.ns[0]-'0')*10+(b.ns[1]-'0');
	b.nam=(b.ns[6]-'0')*1000+(b.ns[7]-'0')*100+(b.ns[8]-'0')*10+(b.ns[9]-'0');
	if(a.nam!=b.nam) return a.nam<b.nam;
	else if(a.thang!=b.thang) return a.thang<b.thang;
	else if(a.ngay!=b.ngay) return a.ngay<b.ngay;
}

void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}

int main(){
	NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++) cin >> ds[i];
	sapxep(ds, N);
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
