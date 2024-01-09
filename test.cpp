//#include<bits/stdc++.h>
//
//using namespace std;
//
//class Person{
//	private:
//		string name;
//		string address;
//	public:
//		string getName(){
//			return name;
//		}
//		string  getAddress(){
//			return address;
//		}
//		void setName(string name){
//			this->name=name;
//		}
//		void setAdress(string address){
//			this->address=address;
//		}
//};
//
//class Student : public Person{
//	private:
//		float gpa;
//	public:
//		float getGpa(){
//			return gpa;
//		}
//		void setGpa(float gpa){
//			this->gpa=gpa;
//		}
//};
//
//int main(){
//	Student s;
//	s.setName("Nguyen Van A");
//	s.setAdress("Ha Noi");
//	s.setGpa(3.07);
//	cout << s.getName() << " " << s.getAddress() << " " << s.getGpa() << endl;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//class Nguoi{
//	private:
//		string name;
//		string gioitinh;
//	public:
//		void nhap();
//		void in();
//};
//
//void Nguoi::nhap(){
//	getline(cin, name);
//	cin >> gioitinh;
//}
//
//void Nguoi::in(){
//	cout << name << " " << gioitinh;
//}
//
//class SinhVien : public Nguoi{
//	public:
//		float gpa;
//	public:
//		void nhap();
//		void in();
//};
//
//void SinhVien::nhap(){
//	Nguoi::nhap();
//	cin >> gpa;
//}
//
//void SinhVien::in(){
//	Nguoi::in();
//	cout << " " << gpa;
//}
//
//int main(){
//	SinhVien a;
//	a.nhap();
//	a.in();
//	cout << a.gpa;
//}

#include<bits/stdc++.h>

using namespace std;

class Nguoi{
	private:
		string name;
		string gioitinh;
	public:
		Nguoi(string name, string gioitinh);
		string getName(){
			return name;
		}
		string getGioiTinh(){
			return gioitinh;
		}
};

Nguoi::Nguoi(string name, string gioitinh){
	this->name=name;
	this->gioitinh=gioitinh;
}

int main(){
	Nguoi a("Hai", "Nam");
	cout << a.getName() << " " << a.getGioiTinh();
}
