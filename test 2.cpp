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
	getline(cin, name);
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
	cin >> lop >> gpa;
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
	cin >> gioday >> kh;
}

void GiangVien::in(){
	Nguoi::in();
	cout << " " << gioday << " "  << kh;
}

int main(){
	Nguoi* n;
	n=new SinhVien;
	n->nhap();
	n->in();
}
