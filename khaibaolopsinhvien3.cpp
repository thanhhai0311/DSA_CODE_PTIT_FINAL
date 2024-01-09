#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	public:
		string name;
		string lop;
		string birthday;
		float score;
	public:
		void chuanhoa(SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien&);
};

void chuanhoa(SinhVien& a){
	string res="";
	string tmp;
	stringstream ss(a.name);
	while(ss >> tmp){
		res+=toupper(tmp[0]);
		for(int i=1; i<tmp.size(); i++){
			res+=tolower(tmp[i]);
		}
		res+=" ";
	}
	res.erase(res.size()-1);
	a.name=res;
}

ostream& operator << (ostream& out, SinhVien a){
	chuanhoa(a);
	out << "B20DCCN001" << " " << a.name << " " << a.lop << " ";
	if(a.birthday[1]=='/') a.birthday.insert(0, 1, '0');
	if(a.birthday[4]=='/') a.birthday.insert(3, 1, '0');
	out << a.birthday << " ";
	out << fixed << setprecision(2) << a.score;
	return out;
}

istream& operator >> (istream& in, SinhVien& a){
	getline(in, a.name);
	in >> a.lop >> a.birthday >> a.score;
	return in;
}

int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}
