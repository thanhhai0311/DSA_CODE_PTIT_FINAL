#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name;
	string lop;
	string birthday;
	float score;
};

void nhapThongTinSV(SinhVien& a){
	getline(cin, a.name);
	cin >> a.lop >> a.birthday >> a.score;
}

void inThongTinSV(SinhVien a){
	cout << "N20DCCN001 " << a.name << " " << a.lop << " ";
	if(a.birthday[1]=='/') a.birthday.insert(0, 1, '0');
	if(a.birthday[4]=='/') a.birthday.insert(3, 1, '0');
	cout << a.birthday << " " << fixed << setprecision(2) << a.score;
}

int main(){
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}

