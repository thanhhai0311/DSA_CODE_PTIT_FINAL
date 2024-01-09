#include<bits/stdc++.h>

using namespace std;

class Nguoi{
	private:
		string name;
		int tuoi;
	public:
		virtual void nhap();
		virtual void in();
};

void Nguoi::nhap(){
	cout << "Nhap ten: ";
	getline(cin, name);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
}

void Nguoi::in(){
	cout << name << " " << tuoi;
}

class SinhVien : public Nguoi{
	private:
		string lop;
		float gpa;
	public:
		void nhap();
		void in();
};

void SinhVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap lop: ";
	cin >> lop;
	cout << "Nhap gpa: ";
	cin >> gpa;
}

void SinhVien::in(){
	Nguoi::in();
	cout << " " << lop << " " << gpa;
}

class GiangVien : public Nguoi{
	private:
		int gioday;
		string kh;
	public:
		void nhap();
		void in();
};

void GiangVien::nhap(){
	Nguoi::nhap();
	cout << "Nhap gio day: ";
	cin >> gioday;
	cout << "Nhap kh: ";
	cin >> kh;
}

void GiangVien::in(){
	Nguoi::in();
	cout << " " << gioday << " "  << kh;
}

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t=0; t<tc; t++){
		Nguoi* n;
		int menu;
		cout << "1.Sinh Vien" << endl << "2.Giang Vien" << endl; 
		cin >> menu;
		cin.ignore();
		switch(menu){
			case 1:
				n=new SinhVien;
				break;
			case 2:
				n=new GiangVien;
				break;
		}
		n->nhap();
		n->in();
		cout << endl;
	}
	return 0;
}
