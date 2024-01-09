#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name;
	string lop;
	string birthday;
	float score;
};

void nhap(SinhVien &s){
	getline(cin, s.name);
	cin >> s.lop;
	cin >> s.birthday;
	cin >> s.score;
}

void in(SinhVien &s){
	if(s.birthday[1]=='/') s.birthday.insert(0, 1, '0');
	if(s.birthday[4]=='/') s.birthday.insert(3, 1, '0');
	cout << "B20DCCN001" << " " << s.name << " " << s.lop << " " << s.birthday;
	cout << " ";
	cout << fixed << setprecision(2) << s.score;
}

int main(){
	SinhVien s;
	nhap(s);
	in(s);
	return 0;
}
