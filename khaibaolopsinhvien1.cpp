#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	public:
		string name;
		string lop;
		string birthday;
		double score;
	public:
		void nhap(){
			getline(cin, name);
			cin >> lop >> birthday >> score;
		}
		void xuat(){
			cout << "B20DCCN001" << " " << name << " " << lop << " ";
			if(birthday[1]=='/') birthday.insert(0, 1, '0');
			if(birthday[4]=='/') birthday.insert(3, 1, '0');
			cout << birthday << " ";
			cout << fixed << setprecision(2) << score;
		}
};

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;	
}
