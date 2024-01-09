#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name;
	string gt;
	string birthday;
	string dc;
	string mst;
	string date;
};

void nhap(struct NhanVien &a){
	getline(cin, a.name);
	cin >> a.gt;
	cin >> a.birthday;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst;
	cin >> a.date;
}

void in(struct NhanVien &a){
	cout << "00001" << " " << a.name << " " << a.gt << " " << a.birthday << " " << a.dc << " " << a.mst << " " <<a.date; 
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}

