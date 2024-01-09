#include<bits/stdc++.h>
using namespace std;

class Nguoi{
	protected:
		string ten, ma, tuoi, gioitinh, ngaysinh, sdt;
	public:
		virtual void nhap();
		virtual void hienthi();
};

void Nguoi::nhap() {
	cout << "Nhap ten: "; getline(cin,ten);
	cout << "Nhap ma: "; cin >> ma;
	cout << "Nhap tuoi: "; cin >> tuoi;
	cout << "Nhap gioi tinh: "; cin >> gioitinh;
	cout << "Nhap ngay sinh: "; cin >> ngaysinh;
	cout << "Nhap so dien thoai: "; cin >> sdt;
}

void Nguoi::hienthi() {
	cout << endl;
	cout << "Ten: " << ten << endl;
	cout << "Ma: " << ma << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Gioi tinh: " << gioitinh << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
	cout << "So dien thoai: " << sdt << endl;
}

class SinhVien : public Nguoi {
	protected:
		int hocphi;
		float gpa;
	public:
		void nhap();
		void hienthi();
};

void SinhVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap hoc phi: "; cin >> hocphi;
	cout << "Nhap GPA: "; cin >> gpa;
}

void SinhVien::hienthi() {
	Nguoi::hienthi();
	cout << "Hoc phi: " << hocphi << endl;
	cout << "GPA: " << gpa << endl;
}

class GiangVien : public Nguoi {
	protected:
		int luong;
		float Gio_day;
	public:
		void nhap();
		void hienthi();
};

void GiangVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap so gio day: "; cin >> Gio_day;
	cout << "Nhap luong: "; cin >> luong;
}

void GiangVien::hienthi() {
	Nguoi::hienthi();
	cout << "So gio day: " << Gio_day << endl;
	cout << "Luong: " << luong << endl;
}

class NhanVien : public Nguoi {
	protected:
		int luong;
		float ngay_cong;
	public:
		void nhap();
		void hienthi();
};

void NhanVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap so ngay cong: "; cin >> ngay_cong;
	cout << "Nhap luong: "; cin >> luong;
}

void NhanVien::hienthi() {
	Nguoi::hienthi();
	cout << "So ngay cong: " << ngay_cong << endl;
	cout << "Luong: " << luong << endl;
}

int main () {
	int menu;
	Nguoi *n;
	cout << "Nhap 1: Sinh vien; 2: Giang vien; 3: Nhan vien " << endl;
	cin >> menu;
	cin.ignore();
	switch(menu) {
		case 1: {
			n = new SinhVien;
			break;
		}
		case 2: {
			n = new GiangVien;
			break;
		}
		case 3: {
			n = new NhanVien;
			break;
		}
	}
	n -> nhap();
	n -> hienthi();
}
