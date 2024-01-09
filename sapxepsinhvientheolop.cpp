//#include<bits/stdc++.h>
//
//using namespace std;
//
//class SinhVien{
//	public:
//		string ma, ten, lop, email;
//	public:
//		friend ostream& operator << (ostream&, SinhVien);
//		friend istream& operator >> (istream&, SinhVien&);
//};
//
//ostream& operator << (ostream& out, SinhVien a){
//	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
//	return out; 
//}
//
//istream& operator >> (istream& in, SinhVien& a){
//	in >> a.ma;
//	//cin.ignore();
//	scanf("\n");
//	getline(in, a.ten);
//	in >> a.lop >> a.email;
//	return in;
//}
//
//bool cmp(SinhVien a, SinhVien b){
//	if(a.lop==b.lop) return a.ma<b.ma;
//	return a.lop<b.lop;
//}
//
//void sapxep(SinhVien a[], int n){
//	sort(a, a+n, cmp);
//}
//
//int main(){
//	SinhVien ds[50];
//	int n; 
//	cin >> n;
//	for(int i=0; i<n; i++){
//		cin >> ds[i];
//	}
//	sapxep(ds, n);
//	for(int i=0; i<n; i++){
//		cout << ds[i];
//	}
//	return 0;
//}


#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma, ten, lop, email;
};

bool cmp(SinhVien a, SinhVien b){
	if(a.lop==b.lop) return a.ma<b.ma;
	return a.lop<b.lop;
}

//void sapxep(SinhVien a[], int n){
//	sort(a, a+n, cmp);
//}

int main(){
	int n;
	cin >> n;
	struct SinhVien ds[50];
	for(int i=0; i<n; i++){
		cin >> ds[i].ma;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].email;
	}
	sort(ds, ds+n, cmp);
	for(int i=0; i<n; i++){
		cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].email;
		cout << endl;
	}
	return 0;
}


